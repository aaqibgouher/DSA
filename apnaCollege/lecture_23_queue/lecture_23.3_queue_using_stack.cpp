#include<iostream>
#include<stack>
using namespace std;

class Queue {
    public:

    stack<int> s1;
    stack<int> s2;

    bool isEmpty() {
        if(s1.empty() && s2.empty()) return true;
        else return false;
    }

    void push(int data) {
        s1.push(data);
    }

    int pop() {
        if(isEmpty()) {
            cout << "Queues are empty\n";
            return -1;
        }

        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        int topEle = s2.top();
        s2.pop();
        return topEle;
    }
};

int main() {
    /*
        1. first approach is that, we can take two stacks, and insertion will be simple, i.e push element at 1st stack
        , now to pop, we will pop all stack1 element and push to stack2. Now, we will delete stack2 top element.
    */
    Queue qu;

    qu.push(1);
    qu.push(2);
    qu.push(3);

    cout << qu.pop() << endl;
    cout << qu.pop() << endl;
    cout << qu.pop() << endl;
    cout << qu.pop() << endl;
    cout << qu.pop() << endl;



    return 0;
}