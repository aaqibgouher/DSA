#include<iostream>
using namespace std;

class StackNode {
    public:

    int data;
    StackNode* next;

    StackNode(int val) {
        this -> data = val;
        this -> next = NULL;
    }
};

void push(StackNode* &top, int val) {
    StackNode* node = new StackNode(val);

    if(top == NULL) {
        top = node;
        return;
    }

    StackNode* temp = top;

    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    temp -> next = node;
}

void pop(StackNode* &top) {
    if(top == NULL) {
        cout << "Stack is empty";
        return;
    }

    StackNode* temp = top;

    if(temp -> next == NULL) {
        StackNode* del = temp;
        top = NULL;
        temp = NULL;
        delete del;
    }

    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    StackNode* del = temp -> next;
    temp -> next = NULL;

    delete del;
}

void print(StackNode* top) {
    StackNode* temp = top;

    if(top == NULL) {
        cout << "Stack is empty\n";
        return;
    }

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;
}

int main() {
    StackNode* top = NULL;

    // push
    push(top, 1);
    push(top, 2);
    push(top, 3);

    print(top);

    // pop
    pop(top);
    pop(top);

    print(top);

    return 0;
}