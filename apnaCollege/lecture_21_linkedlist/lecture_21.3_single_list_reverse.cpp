#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
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

Node* reverseList(Node* &head) {
    Node* prev = NULL;
    Node* currect = head;
    Node* next;

    while(currect != NULL) {
        next = currect -> next;
        currect -> next = prev;
        prev = currect;
        currect = next;
    }

    return prev;
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
    // insert at end
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    // print
    print(head);

    // reverse a linked list
    Node* newHead = reverseList(head);
    print(newHead);

    return 0;
}