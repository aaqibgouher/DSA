#include<iostream>
using namespace std;

bool checkSort(int arr[], int n) {

    if(n == 1) return true;
    
    return arr[0] < arr[1] && checkSort(arr+1, n-1);
}

void decreasing(int num) {
    if(num == 0) return;
    cout << num << " ";
    decreasing(num-1);
}

void increasing(int num) {
    if(num == 0) return;
    increasing(num-1);
    cout << num << " ";
    
}

// first occurence checking from start
int firstOcc(int arr[], int n, int key, int i) {
    if(i == n) {
        return -1;
    }

    if(arr[i] == key) {
        return i;
    }

    return firstOcc(arr, n, key, i+1);
}

// last occurence checking from last
int lastOcc(int arr[], int n, int key, int i) {
    if(i == -1) return -1;

    if(arr[i] == key) return i;

    return lastOcc(arr, n, key, i--);
}

// last occurence checking from start
int lastOccStart(int arr[], int n, int key, int i) {
    if(i == n) return -1;

    int lastArr = lastOccStart(arr, n, key, i+1);

    if(lastArr != -1) return lastArr;

    if(arr[i] == key) return i;

    return -1;
}

int main() {
    /*
        1. check if an array is sorted or not:
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // cout << checkSort(arr, n);

    /*
        2. Print array in increasing and decreasing order:
    */
    // int num;
    // cout << "Enter a number\n";
    // cin >> num;

    // decreasing(num);
    // cout << endl;
    // increasing(num);

    /*
        3. Find the first and last occurence of a number in an array:
        eg: {4, 2, 1, 2, 5, 2, 7}, now for 2, start = 1, and end = 5
    */
    // int n;
    // cout << "Enter array size\n";
    // cin >> n;

    // int arr[n];
    // cout << "Enter array element\n";
    // for(int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // int key;
    // cout << "Enter key element\n";
    // cin >> key;

    // cout << key << " first occurs at index " << firstOcc(arr, n, key, 0) << endl;
    // // cout << key << " last occurs at index " << lastOcc(arr, n, key, n-1) << endl;
    // cout << key << " last occurs at index " << lastOccStart(arr, n, key, 0) << endl;

    return 0;
}