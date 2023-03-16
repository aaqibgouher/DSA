#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int data)
{
    Node *node = new Node(data);

    if (head == NULL)
    {
        head = node;
        head->next = head;
        return;
    }

    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = node;
    node->next = head;
}

void deleteAtHead(Node* &head) {
    if(head == NULL) {
        cout << "Circular list is empty";
        return;
    }

    Node* temp = head;

    if(temp -> next == head) {
        head = NULL;
        delete temp;
        return;
    }

    while(temp -> next != head) {
        temp = temp -> next;
    }

    Node* oldHead = head;
    head = head -> next;
    temp -> next = head;
    delete oldHead;
}

void deleteAtTail(Node* &head)
{
    if (head == NULL)
    {
        cout << "Circular list is empty";
        return;
    }

    Node *temp = head;

    if (temp->next == head)
    {
        delete temp;
        head = NULL;
        return;
    }

    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    Node* del = temp->next;
    temp->next = temp -> next -> next;
    delete del;
}

void print(Node *head)
{
    Node *temp = head;

    if(head == NULL) {
        cout << "C list is empty";
        return;
    }

    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{
    Node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    print(head);

    deleteAtTail(head);

    print(head);

    deleteAtHead(head);
    print(head);


    return 0;
}