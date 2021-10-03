/*
Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. Return the maximum possible summation of i*arr[i].

Examples :  

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can get 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72
*/

#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int find_sum(int arr[], int n) {
    int i = 0, sum = 0;

    for(i=0;i<n;i++) {
        sum = sum + i*arr[i];
    }

    return sum;
}

int main()
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, k = 0, rotation = 0, sum = 0, max = -9999, index = 0;

    while(rotation < n) {
        if(rotation != 0) {
            k = arr[n-1];
            for(i=n-1;i>0;i--) {
                arr[i] = arr[i-1];
            }
            arr[i] = k;
        }

        sum = find_sum(arr, n);

        if(sum > max) {
            max = sum;
            index = rotation;
        }

        rotation++;
    }

    cout<<"maximum sum is "<<max<<" at rotation = "<<index;

    return 0;
}