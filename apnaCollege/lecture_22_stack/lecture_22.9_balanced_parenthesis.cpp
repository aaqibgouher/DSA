#include<iostream>
#include<stack>
using namespace std;

char getOpenBracket(char ch) {
    if(ch == '}') return '{';
    else if(ch == ')') return '(';
    else return '[';
}

bool checkBalancedParenthesis(string parenthesis) {
    stack<char> st;    

    for(int i=0; i<parenthesis.length(); i++) {
        if(parenthesis[i] == '{' || parenthesis[i] == '(' || parenthesis[i] == '[') {
            st.push(parenthesis[i]);
        } else if(parenthesis[i] == '}' || parenthesis[i] == ')' || parenthesis[i] == ']') {
            if(st.top() != getOpenBracket(parenthesis[i])) return false;

            st.pop();
        }
    }

    return true;
}

int main() {
    /*
        Balanced parenthesis: [({})]
        Inbalanced parenthesis: [({)]
    */
    string parenthesis;

    cout << "Enter your parenthesis\n";
    cin >> parenthesis;

    checkBalancedParenthesis(parenthesis) ? cout << "Balanced parenthesis" : cout << "Inbalanced parenthesis";

    return 0;
}