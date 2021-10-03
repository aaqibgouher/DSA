/*
Given an array that is sorted and then rotated around an unknown point. Find if the array has a pair with a given sum ‘x’. It may be assumed that all elements in the array are distinct.

Examples : 

Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
Output: true
There is a pair (6, 10) with sum 16
*/

#include<iostream>
#include<string>
#include <cmath>
using namespace std;

bool check_other_pair_exits(int arr[], int i, int n, int num) {
    int j = 0, flag = 0;

    for(j+=i;j<n;j++) {
        if(num == arr[j]) {
            flag = 1;
            break;
        }
    }

    return flag ? true : false;

}

int main()
{
    int arr[] = {-1, 0, -2, 5, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, flag = 0;
    int sum = -1;   /*given*/

    for(i=0;i<n;i++) {
        if(check_other_pair_exits(arr, i+1, n, sum - arr[i])) {
            flag = 1;
            break;
        }
    }

    cout<<flag ? true : false;      /*1 means true and 0 meand false*/

    return 0;
}