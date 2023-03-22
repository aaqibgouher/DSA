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

class Queue
{
public:
    Node *front;
    Node *back;

    Queue()
    {
        this->front = NULL;
        this->back = NULL;
    }

    bool isEmpty()
    {
        if (this->front == NULL || this->front > this->back)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        Node *node = new Node(data);

        if (this->front == NULL)
        {
            this->back = node;
            this->front = this->back;
            return;
        }

        this->back->next = node;
        this->back = node;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *del = this->front;
        this->front = this->front->next;
        delete del;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is underflow\n";
            return -1;
        }

        return this -> front -> data;
    }

    void print()
    {
        Node *temp = this->front;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue qu;

    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);

    qu.print();
    cout << qu.peek() << endl;

    qu.dequeue();
    qu.print();
    cout << qu.peek() << endl;

    qu.dequeue();
    qu.print();
    cout << qu.peek() << endl;

    qu.dequeue();
    qu.print();
    cout << qu.peek() << endl;

    return 0;
}