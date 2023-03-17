#include<iostream>
#include<stack>
using namespace std;

// void reverseStack(stack<int> st) {
//     stack<int> newSt;

//     while(!st.empty()) {
//         int stTop = st.top();
//         newSt.push(stTop);
//         st.pop();
//     }

//     cout << newSt.top();
// }

void insertAtBottom(stack<int> &st, int top) {
    if(st.empty()) {
        st.push(top);
        return;
    }

    int stTop = st.top();
    st.pop();
    insertAtBottom(st, top);
    st.push(stTop);
}

void reverseStackRecursion(stack<int> &st) {
    if(st.empty()) return;

    int top = st.top();
    st.pop();
    reverseStackRecursion(st);
    insertAtBottom(st, top);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // 1. by taking another stack, its causing extra memory loss
    // reverseStack(st);

    // 2. there is another way to reverse a stack, by Recusion
    reverseStackRecursion(st);
    while(!st.empty()) {
        cout << "[ " << st.top() << " ]"<< endl;
        st.pop();
    }

    return 0;
}