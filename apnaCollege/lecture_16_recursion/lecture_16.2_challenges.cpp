#include<iostream>
using namespace std;

bool checkSort(int arr[], int n) {

    if(n == 1) return true;
    
    return arr[0] < arr[1] && checkSort(arr+1, n-1);
}

void decreasing(int num) {
    if(num == 0) return;
    cout << num << " ";
    decreasing(num-1);
}

void increasing(int num) {
    if(num == 0) return;
    increasing(num-1);
    cout << num << " ";
    
}

int main() {
    /*
        1. check if an array is sorted or not:
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // cout << checkSort(arr, n);

    /*
        2. Print array in increasing and decreasing order:
    */
    // int num;
    // cout << "Enter a number\n";
    // cin >> num;

    // decreasing(num);
    // cout << endl;
    // increasing(num);

    return 0;
}