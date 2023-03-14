#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
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
    node -> prev = temp;
}

void insertAtHead(Node* &head, int data) {
    Node* node = new Node(data);

    if(head == NULL) {
        head = node;
        return;
    }

    node -> next = head;
    head -> prev = node;
    head  = node;
}

void insertAtAny(Node* &head, int data, int pos) {
    Node* node = new Node(data);

    if(pos == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;

    for(int i=1; i<pos-1; i++) {
        temp = temp -> next;
    }

    node -> next = temp -> next;
    temp -> next -> prev = node;
    node -> prev = temp;
    temp -> next = node;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << "NULL\n";
}

void printLast(Node* head) {
    Node* temp = head;

    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> prev;
    }

    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    print(head);
    printLast(head);

    insertAtHead(head, 4);

    print(head);
    printLast(head);

    insertAtAny(head, 5, 1);
    print(head);
    printLast(head);

    return 0;
}