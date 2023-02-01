#include<iostream>
using namespace std;

int main() {

    // 1. Maximum chocolate: Find max number of chocolates? given 1 rupee = 1 chocolate, 3 wrappers = 1 chocolate
    int chocolate = 0, rupee = 0;

    cout << "Enter rupee:" << endl;
    cin >> rupee;

    chocolate = rupee;

    int wrappers = rupee, chocolateFromWrappers = 0;

    while(wrappers >= 3) {
        chocolateFromWrappers = wrappers / 3;
        chocolate += chocolateFromWrappers;
        wrappers = wrappers % 3 == 0 ? chocolateFromWrappers : chocolateFromWrappers + wrappers % 3;
        cout << chocolateFromWrappers << " chocolate from wrappers " << chocolate << " chocolate " << wrappers << " wrappers" << endl; 
    }

    cout << chocolate;


    return 0;
}