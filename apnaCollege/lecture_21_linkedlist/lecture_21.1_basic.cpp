#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);

    // if no element
    if(head == NULL) {
        head = n;
        return;
    }

    // else
    node* temp = head;

    // traversing till last node
    while(temp->next != NULL) {
        temp = temp -> next;
    }

    // reached to last node
    temp -> next = n;
}

void print(node* head) {
    node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}



int main() {
    /*
        1. Linkedlist:

        [1][20] - [2][30] - [3][null]
          10      20      30
    */
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    print(head);


    return 0;
}