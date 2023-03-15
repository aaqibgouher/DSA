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

    Node* del = temp -> next;
    delete del;
    temp -> next = NULL;
}

void deleteAtHead(Node* &head) {
    if(head == NULL) {
        return;
    }

    Node* temp = head;

    head = head -> next;
    head -> prev = NULL;
    delete temp;
}

void deleteAtAny(Node* &head, int pos) {
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;

    for(int i=1; i<pos; i++) {
        temp = temp -> next;
    }

    temp -> prev -> next = temp -> next;

    if(temp -> next != NULL) {
        temp -> next -> prev = temp -> prev;
    }
    
    delete temp;
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
    insertAtTail(head, 4);

    print(head);
    printLast(head);

    // deleteAtTail(head);
    // print(head);
    // printLast(head);
    
    deleteAtAny(head, 1);
    print(head);
    printLast(head);
    return 0;
}