#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int evalPrefixExp(string prefixExp) {
    stack<int> st;

    for(int i=prefixExp.length() - 1; i>=0; i--) {
        if(prefixExp[i] >= '0' && prefixExp[i] <= '9') {
            st.push(prefixExp[i] - '0');
        } else {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (prefixExp[i])
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
    // Evaluation of prefix expression
    string prefixExp;

    cout << "Enter your prefix exp\n";
    cin >> prefixExp;

    cout << evalPrefixExp(prefixExp);

    return 0;
}