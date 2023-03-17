#include<iostream>
#include<stack>
using namespace std;

void reverseStringWords(string sen) {
    stack<string> st;
    string word = "";

    for(int i=0; i<sen.length(); i++) {
        if(sen[i] != ' ' || i == sen.length() - 1) {
            word += sen[i];
        } 
        
        if(sen[i] == ' ' || i == sen.length() - 1){
            st.push(word);
            word = "";
        }
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    /*
        1. Reverse a string by words:
        eg: my name is hello
        output: hello is name my
    */

    string sen;
    cout << "Enter your sentence\n";
    getline(cin, sen);

    reverseStringWords(sen);

    return 0;
}