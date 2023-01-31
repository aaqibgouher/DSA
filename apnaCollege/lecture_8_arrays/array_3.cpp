#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; ++i) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int middle = n/2;

    while(start <=end) {
        middle = (start + end) / 2;

        if(key == arr[middle]) return middle;
        else if(key < arr[middle]) end = middle - 1;
        else if(key > arr[middle]) start = middle + 1;
    }

    return -1;
}

int main() {
    // 1. Linear search in an array:
    // int n;
    // cout << "Enter array size:" << endl;
    // cin >> n;

    // cout << "Enter array element:" << endl;
    // int arr[n]; 
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int key;
    // cout << "Enter search element:" << endl;
    // cin >> key;

    // int index = linearSearch(arr, n, key);
    // if(index == 0 || index) {
    //     cout << key << " present at " << index;
    // }else {
    //     cout << key << " is not present";
    // }

    // Binary Search in an array:
    // int n;
    // cout << "Enter array size:" << endl;
    // cin >> n;

    // cout << "Enter array element:" << endl;
    // int arr[n];
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int n, key;
    // cout << "Enter array size:" << endl;
    // cin >> n;

    // int arr[n];

    // cout << "Enter array elements:" << endl;
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // cout << "Enter search element:" << endl;
    // cin >> key;

    // int index = binarySearch(arr, n, key);
    // if(index >= 0) cout << key << " is present at " << index;
    // else cout << key << " is not present";

    return 0;
}