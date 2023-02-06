#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    // 1. Max till i: find maximum element in the array
    // int n;
    // cout << "Enter array size \n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array elements\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // cout << "Max element of an array is " << findMax(arr, n);

    // 2. Find subarray of a given array:
    /*
        eg: 1 2 3, possible subarrays: [1], [1, 2], [1, 2, 3], [2], [2, 3], [3]
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    return 0;
}