#include<iostream>
#include<string>
using namespace std;

int main() {

    int arr[] = {7,10,4,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, k = 4, num;

    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i] > arr[j]) {
                num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
    }

    cout<<k<<" smallest number is "<<arr[k-1];

    return 0;
}