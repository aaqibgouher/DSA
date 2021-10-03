#include<iostream>

using namespace std;

int main() {
    
    // selection sort
    //  time complexity O(n^2);

    // int i, j, n;

    // cout << "enter the size of array:" << endl;
    // cin >>n;

    // int a[n];

    // for(i=0;i<n;i++) {
    //     cin >> a[i];
    // }

    // for(i=0;i<n;i++) {
    //     for(j=i+1;j<n;j++) {
    //         if(a[i] > a[j]) {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    // for(i=0;i<n;i++) {
    //     cout<<a[i]<<" ";
    // }

    // bubble sort

    int i, j, n;

    cout << "enter the size of array:" << endl;
    cin >>n;

    int a[n];

    for(i=0;i<n;i++) {
        cin >> a[i];
    }

    j = 1;

    while(j < n) {
        for(i=0;i<n-j;i++) {
            if(a[i] > a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        j++;
    }

    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }


    return 0;
}