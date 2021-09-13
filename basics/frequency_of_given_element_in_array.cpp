#include<iostream>
#include<string>
using namespace std;

int main() {

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, count = 0, num = 1;

    for(i=0;i<n;i++) {
        if(arr[i] == num) {
            count ++;
        }
    }

    cout<<"frequency is "<<count;

    return 0;
}