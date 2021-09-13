#include<iostream>
#include<string>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j, k = 2, num = 0;

    for(j=0;j<k;j++) {
        num = arr[0];
        for(i=0;i<n-1;i++) {
            arr[i] = arr[i+1];
        }
        arr[i] = num;
    }    


    for(i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}