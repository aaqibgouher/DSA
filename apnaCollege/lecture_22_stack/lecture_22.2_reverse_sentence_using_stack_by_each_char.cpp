#include<iostream>
using namespace std;

#define N 100

class Stack {
    public:

    char* ch;
    int top;
    int tempTop;

    Stack() {
        this -> ch = new char[N];
        this -> top = -1;
    }

    void push(char senChar) {
        if(this -> top == N-1) {
            cout << "Stack overflow\n";
            return;
        }

        this -> top ++;
        this -> ch[this -> top] = senChar;
    }

    bool isEmpty() {
        if(this -> top == -1) return true;
        else return false;
    }

    void print() {
        if(isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }

        this -> tempTop = this -> top;
        while(this -> tempTop != -1) {
            cout << this -> ch[this -> tempTop];
            this -> tempTop --;
        }
    }
};

int main() {
    /*
        1. Reverse a sentence, each character;
        eg: my name is aaqib
        biqaa si eman ym
    */
    string sen;

    cout << "Enter a sentence\n";
    getline(cin, sen);

    Stack st;

    for(int i=0; i<sen.length(); i++) {
        st.push(sen[i]);
    }

    st.print();

    return 0;
}