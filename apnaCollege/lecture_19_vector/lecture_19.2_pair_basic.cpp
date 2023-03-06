#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Pair: It can be used to define two types at once
    // declaration
    // pair<int, string> pr;
    // pr.first = 10;
    // pr.second = "aaqib";

    // cout << pr.first << " " << pr.second;

    /*
        1. Reduce the given array: 
        eg: 
        10 16 7 14 5 3 12 9
        so, we have to replace the smallest value by 0, and after that 1, 2, 3 etc
        4  7  2 6  1 0  5 3  
    */
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // made vector of pairs
    vector < pair<int, int> > vect;
    // looping over an array, and pushing pair i.e ele and ind in vector
    for(int i=0; i<arrSize; i++) {
        // first way, created pair each time
        // pair<int, int> pr;
        // pr.first = arr[i];
        // pr.second = i;

        // vect.push_back(pr);

        // second way, using make pair
        vect.push_back(make_pair(arr[i], i));
    }

    // sorting a vector
    sort(vect.begin(), vect.end());

    // taking count = 0
    int count = 0;

    // looping over vector, and accessing the index, and setting the value in an array, also increaing count each time
    for(auto ele:vect) {
        arr[ele.second] = count;
        count ++;
    }

    // consoling the arr
    for(int i=0; i<arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}