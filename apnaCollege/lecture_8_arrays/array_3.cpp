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

// int binarySearch(int arr[], int n, int key) {
//     int middle = arr[0];

//     for(int i=0; i<n; ++i) {
//         middle = n/2;

//         if(key == arr[middle]) {
//             return i;
//         }else if(key < arr[middle]) {
//             n /= 2;
//         }else {
//             i = (n / 2) + 1;
//         }
//     }

//     return -1;
// }

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

    // int key;
    // cout << "Enter search element:" << endl;
    // cin >> key;

    // int index = binarySearch(arr, n, key);

    // if(index == 0 || index) cout << key << " present at " << index;
    // else cout << key << " not present";

    return 0;
}