#include<iostream>
using namespace std;

int main() {
    // 1. Selection sort: find minimum element, and swap it. On each step, we get our minimum element to left side. 
    /*
        eg: 5 4 3 2 1
        here, we compare each element. so first, com(5, 4), swap(5, 4), 4 5 3 2 1. com(4, 3), swap(4, 3), 3 5 4 2 1. com(3, 2),
        swap(3, 2), 2 5 4 3 1. compare(2, 1), swap(2, 1), 1 5 4 3 2. repeat the entire process. using selection sort, 
        on first iteration, we get out least element to the right side.
    */
    // int n, k;
    // cout << "Enter array size:" << endl;
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element:" << endl;
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<n; ++i) {
    //     for(int j=i+1; j<n; ++j) {
    //         if(arr[i] > arr[j]) {
    //             k = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = k;
    //         }
    //     }
    // }

    // for(int i=0; i<n; ++i) {
    //     cout << arr[i] << " ";
    // }

    // 2. Bubble sort: On each step, we get our max element to right. 
    /*
        eg: 5 4 3 2 1
        here, first we compare 5 to 4, 5 > 4 swap it, 4 5 3 2 1. again compare 5 and 3, swapt(5, 3) 4 3 5 2 1. again compare 5 and 2, swap(5, 2)
        4 3 2 5 1. compare 5 and 1, swap(5, 1), 4 3 2 1 5. After this we get our largest array element to the right side. Similarly,
        like bubbles. 
    */
    // int n, k;
    // cout << "Enter array size:" << endl;
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element:" << endl;
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // for(int i=0; i<n-1; ++i) {
    //     for(int j=0; j<n-i-1; ++j) {
    //         if(arr[j] > arr[j+1]) {
    //             k = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = k;
    //         }
    //     }
    // }

    // for(int i=0; i<n; ++i) {
    //     cout << arr[i] << " ";
    // }
    
    // Insertion sort: In each step, we check in our sorted array.
    /*
        eg: 1 5 4 3 2
        here we start from second element. so, sorted array is 1, now we will compare 5 with 1, if is in the correct order, we will leave it. else we have keep please in correct order. 
        Now, our sorted array is 1 5. Now, for 4, we will compare it with 1, and then compare it with 5, since 4 < 5. So, we have to put the 4 in place of 5, and shift rest of the right array.
        After placing 4 to correct order, array is 1 4 5 3 2. now, compare 3 with sorted array 1 4 5. so 3 < 4, shfit the rest array by 1. hence sorted array will be
        1  3 4 5 2. Same with the 2, after doing it. we will get our sorted array. 
    */
   int n;
   cout << "Enter array size" << endl;
   cin >> n;
   
   int arr[n], current, j;

   cout << "Enter array elements" << endl;
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    for(int i=1; i<n; ++i) {
        current = arr[i];
        j = i-1;

        while(arr[j] > current && j >= 0) {
            arr[j+1] = arr[j];
            --j;
        }

        arr[j+1] = current;
    }

    for(int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}