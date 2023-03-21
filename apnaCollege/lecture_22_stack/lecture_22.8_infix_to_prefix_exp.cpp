#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int precendence(char ch) {
    if(ch == '^') return 3;
    else if(ch == '*' || ch == '/') return 2;
    else if(ch == '+' || ch == '-') return 1;
    else return -1;
}

string infixToPrefixExp(string infixExp) {
    reverse(infixExp.begin(), infixExp.end());

    stack<char> st;
    string res = "";

    for(int i=0; i<infixExp.length(); i++) {
        if(infixExp[i] == ')') {
            st.push(infixExp[i]);
        } else if(infixExp[i] >= 'a' && infixExp[i] <= 'z') {
            res += infixExp[i];
        } else if(infixExp[i] == '(') {
            while(!st.empty() && st.top() != ')') {
                res += st.top();
                st.pop();
            }

            if(!st.empty()) {
                st.pop();
            }
        } else {
            while(!st.empty() && precendence(st.top()) > precendence(infixExp[i])) {
                res += st.top();
                st.pop();
            }

            st.push(infixExp[i]);
        }
    }

    while(!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string infixExp;

    cout << "Enter your infix expression\n";
    cin >> infixExp;

    cout << infixToPrefixExp(infixExp);

    return 0;
}