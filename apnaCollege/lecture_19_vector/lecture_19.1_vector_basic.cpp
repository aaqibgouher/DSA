#include<iostream>
#include<vector>
using namespace std;

int main() {
    /*
        1. Vector: In vector, we can define its size dynamically, and later it can also be changed. 
    */
    // defining vector
    vector<int> vect;

    // push element at the last of vector
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);

    // two ways we can iterate over a vector
    // via simple loop
    for(int i=0; i<vect.size(); i++) {
        cout << vect[i] << " ";
    }

    cout << endl;

    // via iterator
    vector<int>::iterator it;
    for(it=vect.begin(); it!=vect.end();it++) {
        cout << *it << " ";
    }

    cout << endl;

    // via auto keyword
    for(auto ele:vect) {
        cout << ele << " ";
    }

    cout << "\nAfter delete\n";
    // delete last element
    vect.pop_back();
    for(auto ele:vect) {
        cout << ele << " ";
    }

    cout << "\nchecking for specific size with default value\n";
    // define vector with specific size
    vector<int> newVect(3, 1);
    for(auto ele:newVect) {
        cout << ele << " ";
    }

    // cout << "\nAfter swap\n";
    // swap(vect, newVect);
    // for(auto ele:vect) {
    //     cout << ele << " ";
    // }
    // cout << endl;
    // for(auto ele:newVect) {
    //     cout << ele << " ";
    // }

    // sort vectors
    vector<int> sortNum;
    sortNum.push_back(5);
    sortNum.push_back(4);
    sortNum.push_back(3);

    cout << "\nBefore sort\n";
    for(auto ele:sortNum) {
        cout << ele << " ";
    }

    cout << "\nafter sort\n";
    sort(sortNum.begin(), sortNum.end());
    for(auto ele:sortNum) {
        cout << ele << " ";
    }


    return 0;
}