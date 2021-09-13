#include<iostream>
#include<string>
using namespace std;

int main() {

    int arr[] = {0,2,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, k;

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }

    for(i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}