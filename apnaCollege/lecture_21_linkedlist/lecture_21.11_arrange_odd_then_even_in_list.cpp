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

Node* arrangeOddEven(Node* &head) {
    Node* newNode = new Node(-1);
    Node* newHead = newNode;
    Node* newTemp = newHead;

    Node* temp = head;

    while(temp != NULL) {
        if(temp -> data % 2 != 0) {
            Node* node = new Node(temp -> data);
            newTemp -> next = node;
            newTemp = newTemp -> next;
        }

        temp = temp -> next;
    }

    temp = head;

    while(temp != NULL) {
        if(temp -> data % 2 == 0) {
            Node* node = new Node(temp -> data);
            newTemp -> next = node;
            newTemp = newTemp -> next;
        }

        temp = temp -> next;
    }

    return newHead -> next;
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
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 1);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    print(head);

    Node* newHead = arrangeOddEven(head);
    print(newHead);

    return 0;
}