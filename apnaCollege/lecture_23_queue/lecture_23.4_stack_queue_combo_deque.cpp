#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);

    for(auto i : dq) {
        cout << i << " ";
    }

    cout << endl;

    dq.pop_front();
    for(auto i : dq) {
        cout << i << " ";
    }

    cout << endl;

    dq.pop_back();
    for(auto i : dq) {
        cout << i << " ";
    }

    cout << endl;


    return 0;
}