#include<iostream>
#include<string>
using namespace std;

int main() {

    int arr[] = {2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    int arr2[n];

    for(i=n-1;i>=0;i--) {
        arr2[n-i-1] = arr[i];
    }

    for(i=0;i<n;i++) {
        cout<<arr2[i]<<" ";
    }

    return 0;
}