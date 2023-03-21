#include<iostream>
#include<stack>
using namespace std;

int precendence(char ch) {
    if(ch == '^') {
        return 3;
    } else if(ch == '*' || ch == '/') {
        return 2;
    } else if(ch == '+' || ch == '-') {
        return 1;
    } else {
        return -1;
    }
}

void infixToPostfix(string infixExp) {
    stack<char> st;

    for(int i=0; i<infixExp.length(); i++) {
        if(infixExp[i] == '(') {
            st.push(infixExp[i]);
        } else if(infixExp[i] >= 'a' && infixExp[i] <= 'z') {
            cout << infixExp[i];
        } else if(infixExp[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        } else {
            while(!st.empty() && precendence(st.top()) > precendence(infixExp[i])) {
                cout << st.top();
                st.pop();
            }

            st.push(infixExp[i]);
        }
    }

    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

int main() {
    string infixExp;

    cout << "Enter your infix expression\n";
    cin >> infixExp;

    infixToPostfix(infixExp);

    return 0;
}