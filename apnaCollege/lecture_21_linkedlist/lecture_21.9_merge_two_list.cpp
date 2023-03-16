#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

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

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << endl;
}

Node* mergeSortedList(Node* &head1, Node* &head2) {
    Node* head3 = new Node(-1);

    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = head3;

    while(temp1 != NULL && temp2 != NULL) {
        if(temp1 -> data < temp2 -> data) {
            temp3 -> next = temp1;
            temp1 = temp1 -> next;
        } else {
            temp3 -> next = temp2;
            temp2 = temp2 -> next;
        }
        temp3 = temp3 -> next;
    }

    while(temp1 != NULL) {
        temp3 -> next = temp1;
        temp1 = temp1 -> next;
        temp3 = temp3 -> next;
    }

    while(temp2 != NULL) {
        temp3 -> next = temp2;
        temp2 = temp2 -> next;
        temp3 = temp3 -> next;
    }

    return head3 -> next;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);

    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);

    print(head1);
    print(head2);

    Node* newHead = mergeSortedList(head1, head2);

    print(newHead);
    return 0;
}