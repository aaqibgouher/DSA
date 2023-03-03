#include<iostream>
using namespace std;

void mergeArr(int arr[], int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++) {
        a[i] = arr[left+i];
    }
    for(int i=0; i<n2; i++) {
        b[i] = arr[mid+1+i];
    }

    int i=0; 
    int j=0;
    int k=left;

    while(i<n1 && j<n2) {
        if(a[i] < b[j]) {
            arr[k] = a[i];
            k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<n1) {
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j<n2) {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        mergeArr(arr, left, mid, right);
    }

    return;
}

int main() {
    /*
        1. Merge sort: 
        {6, 3, 9, 5, 2, 8, 7, 1}
        it is based on divide and conq. algorithm. We divide the entire problem in smaller part, and then solve it.

        approach:
        1. We take two pointer variable say left(l), right(r)
        2. then, we find the mid = (l+r) / 2
        3. from our main function, we call mergeSort(arr, start, n-1);
        4. In that function, we make a condition, we will call the same function untill l < f.
        5. Now, we already find our mid, first we will call the mergeSort(arr, l, mid)
        6. then again, call mergeSort(arr, mid+1, r)
        
        eg: {6, 3, 9, 5, 2, 8, 7, 1}
            /                   \
        {6, 3, 9, 5}      {2, 8, 7, 1}
            / \               /   \ 
        {6, 3} {9, 5}       {2, 8} {7, 1}
          / \    / \         /  \   /  \  
         {6} {3} {9} {5}    {2} {8} {7} {1}

        till here, our mergeSort output is, 
        7. now, as we reach the leaf nodes, we start merging it in sorted order. 
        {6} {3} {9} {5}    {2} {8} {7} {1}  
          \/      \/         \/      \/
         {3, 6}  {5, 9}     {2, 8}  {1, 7}
             \  /                \  /
           {3, 5, 6, 9}       {1, 2, 7, 8}
                      \       /
                {1, 2, 3, 5, 6, 7, 8, 9}
        this is final ans
    */
    int n;
    cout << "Enter array size\n";
    cin >> n;

    int arr[n];
    cout << "Enter unsorted array\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);
    for(int i=0 ;i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}