#include<iostream>
using namespace std;

int main() {
    // 1. Selection sort: find minimum element, and swap it
    int n, k;
    cout << "Enter array size:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter array element:" << endl;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            if(arr[i] > arr[j]) {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }

    for(int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}