#include<iostream>
using namespace std;

#define N 100

class Stack {
    public:

    int* stack;
    int top;

    Stack() {
        this -> stack = new int[N];
        this -> top = -1;
    }

    void push(int num) {
        if(this -> top == N-1) {
            cout << "Stack overflow\n";
            return;
        }

        this -> top ++;
        this -> stack[this -> top] = num;
    }   

    bool isEmpty() {
        if(this -> top == -1) return true;
        else return false;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }

        this -> top --;
    } 

    int getTop() {
        if(isEmpty()) {
            cout << "No element found\n";
            return -1;
        }

        return this -> stack[this -> top];
    }

    void print() {
        if(isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        
        for(int i=0; i<=this -> top; i++) {
            cout << this -> stack[i] << " ";
        }
        cout << endl;
    }

};

int main() {
    Stack st;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(7);

    st.print();
    cout << st.getTop() << endl;

    st.pop();
    st.pop();
    st.print();
    cout << st.getTop() << endl;

    st.pop();
    st.pop();
    st.print();
    cout << st.getTop();

    return 0;
}