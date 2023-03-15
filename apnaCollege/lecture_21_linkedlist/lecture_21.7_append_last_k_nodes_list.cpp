#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

int getLength(Node* head) {
    Node* temp = head;

    int count = 0;
    while(temp != NULL) {
        count ++;
        temp = temp -> next;
    }

    return count;
}

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

void appendKNodes(Node* &head, int k) {
    Node* temp = head;
    Node* tail = head;
    int len = getLength(head);
    int count = 1;

    if(k == len) return;

    while(temp -> next != NULL) {
        if(count == len - k) {
            tail = temp;
        }
        count ++;
        temp = temp -> next;
    }

    temp -> next = head;
    head = tail -> next;
    tail -> next = NULL;
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    // Append k nodes
    /*
        Explanation: 
        1 -> 2 -> 3 -> 4 -> 5 -> NULL
        input: k = 2
        output: 4 -> 5 -> 1 -> 2 -> 3 -> NULL

        so, we need to take last two elements, i.e 4 -> 5, and after that we have to append the rest to their right side. 
        So, we loop till len - k, and put our tail pointer at 3 node, so that we can identify the last node.
        and then, once we reach at the last node, we are setting next address to head, and then pointing head to 
        tail -> next, and then tail next to null. Thats it.
    */
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    print(head);

    appendKNodes(head, 7);
    print(head);

    return 0;
}