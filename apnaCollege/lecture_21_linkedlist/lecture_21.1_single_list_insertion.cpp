#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
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

void insertAtHead(Node* &head, int data) {
    Node* node = new Node(data);

    if(head == NULL) {
        head = node;
        return;
    }

    node -> next = head;
    head = node;
}

void insertAtAny(Node* &head, int data, int pos) {
    Node* node = new Node(data);

    if(pos == 1) {
        node -> next = head;
        head = node;
        return;
    }

    Node* temp = head;

    for(int i=1; i<pos-1; i++) {
        temp = temp -> next;
    }

    node -> next = temp -> next;
    temp -> next = node;
}

bool search(Node* head, int key) {
    Node* temp = head;

    while(temp != NULL) {
        if(temp -> data == key) {
            return true;
        }
        temp = temp -> next;
    }

    return false;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    print(head);

    insertAtHead(head, 4);
    print(head);

    insertAtAny(head, 4, 2);
    print(head);

    insertAtAny(head, 5, 1);
    print(head);

    insertAtAny(head, 6, 2);
    print(head);

    cout << search(head, 5);

    return 0;
}