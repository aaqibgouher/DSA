// #include <iostream>

// using namespace std;

// int find_min_diff(int a, int b, int c) {
//     int min = a, max = a;

//     // min
//     if (a <= b && a <= c)
//         min = a;
//     else if (b <= a && b <= c)
//         min = b;
//     else
//         min = c;

//     // max
//     if (a >= b && a >= c)
//         max = a;
//     else if (b >= a && b >= c)
//         max = b;
//     else
//         max = c;

//     return max - min;
// }

// int main()
// {
//     int i, j, k;
//     int arr[] = {1, 3, 5, 6, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int m = 3;
//     int arr2[m], p=0;
//     int min_diff = 0;
//     int min = -99;

//     for(i=0;i<=n-m;i++) {
//         for(j=i+1;j<=n-m+1;j++) {
//             for(k=j+1;k<n;k++) {
//                 min_diff = find_min_diff(arr[i], arr[j], arr[k]);
//                 if(min < 0) {
//                     min = min_diff;
//                 }else {
//                     min = min < min_diff ? min : min_diff;
//                 }
//             }
//         }
//     }

//     cout<<"The least difference is "<<min;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int n= 7;
  int m=3;
  int arr[n]={7, 3, 2, 4, 9, 12, 56};
  int tem;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    int min,c;
    for(int k=0;k+m-1<n;k++){
        c = arr[k+m-1]-arr[k];
        if(c<min){
            min = c;
        }
    }
    cout<<min<<endl;
}