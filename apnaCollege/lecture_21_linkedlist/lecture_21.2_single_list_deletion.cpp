#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
    }
};

void insertAtTail(Node* &head, int data) {
    Node* node = new Node(data);

    if(head == NULL) {
        node -> next = head;
        head = node;
        return;
    }

    Node* temp = head;

    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    node -> next = NULL;
    temp -> next = node;
}

void deleteAtTail(Node* &head) {
    if(head == NULL) {
        cout << "Linked list is empty\n";
        return;
    }

    Node* temp = head;

    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }

    delete temp -> next;
    temp -> next = NULL;
}

void deleteAtHead(Node* &head) {
    if(head == NULL) {
        cout << "Linked list is empty\n";
        return;
    }

    Node* temp = head;

    head = temp -> next;
    delete temp;
}

void deleteAtAny(Node* &head, int pos) {
    Node* temp = head;

    if(pos == 1) {
        head = temp -> next;
        delete temp;
        return;
    }

    for(int i=1; i<pos-1; i++) {
        temp = temp -> next;
    }

    Node* delNode = temp -> next;
    temp -> next = temp -> next -> next;

    delete delNode;
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
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    print(head);

    // delete at tail
    // deleteAtTail(head);
    // print(head);

    // delete at head
    // deleteAtHead(head);
    // print(head);

    // delete at any position
    deleteAtAny(head, 5);
    print(head);


    return 0;
}