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

void deleteAtTail(Node* &head) {
    if(head == NULL) {
        cout << "Doubly LL is empty";
        return;
    }

    Node* temp = head;

    if(temp -> next == NULL) {
        delete temp;
        head = NULL;
        return;
    }

    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }

    delete temp -> next;
    temp -> next = NULL;
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

    deleteAtTail(head);
    print(head);
    printLast(head);
    print(head);
    printLast(head);
    print(head);
    printLast(head);

    return 0;
}