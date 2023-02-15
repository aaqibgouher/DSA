#include <iostream>
using namespace std;

int kadensAlgo(int arr[], int n)
{
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}

bool pairSum(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << arr[i] << " + " << arr[j] << " = " << k;
                return true;
            }
        }
    }

    return false;
}

int main()
{
    /*
        1. Maximum subarray sum: using kadane's algorithm. O(n). Traverse into the array, add the sum and arr[i], if sum is negative
        make the sum to zero. and then, find the max between sum and maxSum
    */
    // int n, sum = 0, maxSum = INT_MIN;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array elements\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // cout << kadensAlgo(arr, n);

    /*
        2. Maximum circular sub array sum:
        eg: 1st case: {-1, 4, -6, 7, 4}, 2nd case {4, -4, 6, -6, 10, -11, 12}. In first case, there is no need to wrap
        the start to end because, contributing element is in the between i.e maxSum = 7. In second case, the approach will be,
        find nonWrapping sum using kaden's algo, and then take sum and maxSum, iterate over an array, find totalSum += arr[i]
        and change the arr[i] = -arr[i]. Now, again after loop, wrappingSum will be totalSum + kadens(negative array).
        after that, just take max from wrap ,and nonwrap. Output is done.
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;
    // int arr[n];
    // cout << "Enter array elements\n";
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> arr[i];
    // }

    // int wrapping, nonWrapping;
    // nonWrapping = kadensAlgo(arr, n);

    // int totalSum = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     totalSum += arr[i];
    //     arr[i] = -arr[i];
    // }

    // wrapping = totalSum + kadensAlgo(arr, n);
    // cout << max(wrapping, nonWrapping);

    /*
        3. Pair Sum Problem: check if there exists two elements in an array such that their sum is equal to given k.
        eg: {2, 4, 7, 11, 14, 16, 20, 21}, k = 31,
        Outpur: index is 3 to 6 => 11 + 20 = 31 yes
    */
    // 1. Brute force: loop i=0 -> i < n-1, and then j=i+1 -> j<n. compare if(arr[i] + arr[j] = k) return true else false.
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int k;
    // cout << "Enter the element\n";
    // cin >> k;

    // cout << endl << pairSum(arr, n, k);
    /* 2. If an array is sorted, we will take two pointers say start and end, now, we will add start + end, if start + end < k
        it means that, we need to add more, hence we will shift start to right i.e start ++. else if start + end < k, shift end --;
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array elements\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int k;
    // cout << "Enter k value\n";
    // cin >> k;
    // int start = 0, end = n - 1, sum = 0;


    // while(start < end) {
    //     sum = arr[start] + arr[end];

    //     if(sum == k) {
    //         cout << arr[start] << " + " << arr[end] << " = " << k;
    //         break;
    //     }
    //     else if(sum < k) {
    //         start ++;
    //     } else {
    //         end --;
    //     }
    // }

    return 0;
}