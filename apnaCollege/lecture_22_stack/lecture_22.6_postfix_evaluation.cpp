#include<iostream>
#include<stack>
using namespace std;

int evalPostExp(string postfixExp) {
    stack<int> st;

    for(int i=0; i<postfixExp.length(); i++) {
        if(postfixExp[i] >= '0' && postfixExp[i] <= '9') {
            st.push(postfixExp[i] - '0');
        } else {
            int operand2 = st.top();
            st.pop(); 
            int operand1 = st.top();
            st.pop();

            switch (postfixExp[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            default:
                break;
            }
        }
    }

    return st.top();
}

int main() {
    string postfixExp;
    cout << "Enter your postfix expression\n";
    cin >> postfixExp;

    cout << evalPostExp(postfixExp);

    return 0;
}