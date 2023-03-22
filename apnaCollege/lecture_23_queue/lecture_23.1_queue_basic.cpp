#include<iostream>
using namespace std;

#define N 100

class Queue {
    public:

    int* queue;
    int front;
    int back;

    Queue() {
        this -> queue = new int[N];
        this -> front = -1;
        this -> back = -1;
    }

    bool isEmpty() {
        if(this -> front == -1 && this -> back == -1 || this -> front > this -> back) return true;
        else return false;
    }

    void enqueue(int data) {
        if(this -> back == N-1) {
            cout << "Queue is full";
            return;
        }

        if(isEmpty()) {
            this -> front ++;
            this -> back ++;

            this -> queue [this -> back] = data;
        } else {
            this -> back ++;
            this -> queue[this -> back] = data;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue is empty";
            return;
        }

        this -> front ++;
    }

    int peek() {
        if(isEmpty()) {
            cout << "Queue is empty";
            return -1;
        }

        return this -> queue[this -> front];
    }
};

int main() {
    Queue qu;

    // Enqueue
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);

    cout << qu.peek() << endl;

    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    cout << qu.peek() << endl;

    return 0;
}