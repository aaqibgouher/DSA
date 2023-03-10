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

bool detectCycle(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast) return true;
    }

    return false;
}

void makeCycle(Node* &head, int pos) {
    Node* start;
    Node* temp = head;

    int count = 1;
    while(temp -> next != NULL) {
        if(count == pos) {
            start = temp;
        }

        temp = temp -> next;
        count ++;
    }

    temp -> next = start;
}

void removeCycle(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    do {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    while(slow != fast);

    fast = head;
    
    while(slow -> next != fast -> next) {
        slow = slow -> next;
        fast = fast -> next;
    }

    slow -> next = NULL;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    // cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    
    print(head);

    makeCycle(head, 4);

    cout << endl << detectCycle(head) << endl;

    removeCycle(head);

    print(head);

    cout << endl << detectCycle(head) << endl;
    return 0;
}