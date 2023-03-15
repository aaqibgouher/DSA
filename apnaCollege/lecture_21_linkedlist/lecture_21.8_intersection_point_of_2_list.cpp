#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

int getLength(Node* head) {
    Node* temp = head;

    int count = 0;
    while(temp != NULL) {
        count ++;
        temp = temp -> next;
    }

    return count;
}

void insertAtTail(Node* &head, int data) {
    Node* node = new Node(data);

    if(head == NULL) {
        head = node;
        return;
    }

    Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    temp -> next = node;
}

void intersection(Node* &head1, Node* &head2, int pos) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    int len1 = getLength(head1);
    int len2 = getLength(head2);

    // taking temp2 to the last of second list
    while(temp2 -> next != NULL) {
        temp2 = temp2 -> next;
    }

    for(int i=1; i<len1-pos; i++) {
        temp1 = temp1 -> next;
    }

    temp2 -> next = temp1 -> next;
}

bool findIntersection(Node* &head1, Node* &head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    int len1 = getLength(head1);
    int len2 = getLength(head2);

    int count = 1;
    while(count != len1 - len2 + 1) {
        temp1 = temp1 -> next;
        count ++;
    }

    while(temp1 != NULL && temp2 != NULL) { 
        if(temp1 -> next == temp2 -> next) {
            return true;
        }

        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }

    return false;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    /*
        1. Find intersection point of 2 linked list:
        input: 
        l1: 1 2 3 4 5 6
        l2: 9 10
        position: 2

        linked list will be:
        l1: 1 2 3 4 5 6
        l2: 9 10 5 6 (element from last two will be added to l2)

        we need to make intersection function, which will take two list, and position, and make it intersected. So
        we will first iterate to the last node of l2, and then leave temp2 at last of l2, now, we will shift temp1 
        to len1 - pos, and then, simply we will assign temp2 -> next = temp1 -> next. 

        Second, we need to check that, If intersection is present in a list or not. So, we will shift our temp1 to 
        matching part of l2, and then we will start looping over both list, and compare if temp1 -> next == temp2 -> next
        meand, there is element in both of list, having same next node. If found return true, else false
    */
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);

    insertAtTail(head2, 9);
    insertAtTail(head2, 10);

    intersection(head1, head2, 4);

    print(head1);
    print(head2);

    cout << findIntersection(head1, head2);

    return 0;
}