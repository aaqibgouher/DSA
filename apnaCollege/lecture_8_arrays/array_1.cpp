#include<iostream>
#include<climits>
using namespace std;

int findMin(int arr[], int n) {
    int minNo = INT_MAX;

    for(int i=0; i<n; ++i) {
        if(arr[i] < minNo) {
            minNo = min(minNo, arr[i]);
        }
    }

    return minNo;
}

int findMax(int arr[], int n) {
    int maxNo = INT_MIN;

    for(int i=0; i<n; ++i) {
        maxNo = max(maxNo, arr[i]);
    }

    return maxNo;
}

int main() {
    // 1. Max and min in an array
    int n;
    cout << "Enter the size of an array" << endl;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    cout << "Max is " << findMax(arr, n) << endl;
    cout << "Min is " << findMin(arr, n);
    return 0;
}