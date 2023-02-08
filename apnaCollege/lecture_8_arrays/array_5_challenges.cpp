#include <iostream>
using namespace std;

// int findMax(int arr[], int n)
// {
//     int max = arr[0];

//     for (int i = 0; i < n; ++i)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     return max;
// }

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
    // int n, j, k;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<n; ++i) {
    //     for(int j=0; j<n; ++j) {
    //         for(k=i; k<=j; ++k) {
    //             cout <<arr[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    // 3. sum of all possible subarray
    // int n;

    // cout << "Enter array size" << endl;
    // cin >> n;

    // int arr[n], sum = 0;

    // cout << "Enter array element" << endl;
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<n; ++i) {
    //     for(int j=i; j<n; ++j) {
    //         sum += arr[j];
    //     }
    //     cout << endl;
    // }

    // cout << "Sum is " << sum;

    // 4. Maximum continuous subarray: in such a way that the difference between two contiguous element is same.
    /*
        eg: 10  7  4  6  8  10  11
        dif  -3  -3  2  2  2  1
        hence, maximum number of continuous difference is of 2. It occurs for {4, 6, 8, 10}, so output is 4
    */
    // int n, diff = 0, count = 0, max = 0;

    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<n-1; ++i) {
    //     if(arr[i+1] - arr[i] == diff) {
    //         ++count;
    //         max = max > count ? max : count;
    //     } else {
    //         diff = arr[i+1] - arr[i];
    //         count = 1;
    //         max = max > count ? max : count;
    //     }
    // }

    // cout << "Count is " << max + 1;

    // 5. Record Breaking Day:
    /*
        Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

        1. The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
        2. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
        Note that the very first day could be a record breaking day!
        Please help Isyana find out the number of record breaking days.

        eg: {1, 2, 0, 7, 2, 0, 2, 2}
        here, starting with 1. first condition will not work, since no previous day, also 2nd condition will be false. Coming to 2,
        1st condition satisfied, 2 > {1}, and 2nd condition: following day is 0, 2 > 0, record breaking days 2nd day. Again for 0, 1st fails, 2nd fails.
        for 7, 1st 7 > {1, 2, 0}, 2nd 7 > 2, hence 4th day is record breaking till now. Hence ans is 4th day.
    */
    // int n, count = 0, i = 0;

    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];

    // cout << "Enter array elements\n";
    // for(i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int max = arr[0];

    // for(i=0; i<n; ++i) {
    //     // first day
    //     if(i==0 && arr[i] > arr[i+1]) {
    //         max = arr[0];
    //         ++count;
    //     }
    //     // last day
    //     else if(i == n-1) {
    //         max = arr[i] > max ? arr[i] : max;

    //     }
    //     // remaining day
    //     else {
    //         if(arr[i] > max && arr[i] > arr[i+1]) {
    //             ++count;
    //             max = arr[i];
    //         }
    //     }
    // }

    // cout << "Number of record breaking days are " << count;

    /* 6. Given an array arr[] of size N. The task is to find the first repeating element in the array of integers, i.e. an element
        that occurs more than once and whose index of first occurrence is smallest.
        eg: {1, 5, 3, 4, 3, 5, 6}
        5 is appearing twice at index 1(first), and 3 is also appearing twice at 2(first occurrence), so the least index is of 5
        . Hence ans is index + 1 = 2;
    */

    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // // taking N as 10^6, and making it a constant
    // const int N = 1e6+2;
    // int arr[n], newArr[N];

    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<N; ++i) {
    //     newArr[i] = -1;
    // }

    // // for min, taking max constant
    // int minIdx = INT_MAX;

    // for(int i=0; i<n; ++i) {
    //     // 1st occurrence
    //     if(newArr[arr[i]] == -1) {
    //         newArr[arr[i]] = i;
    //     } 
    //     // more than one occurrence
    //     else {
    //         minIdx = min(minIdx, newArr[arr[i]]);
    //     }
    // }

    // cout << "Min is " << minIdx + 1;

    return 0;
}