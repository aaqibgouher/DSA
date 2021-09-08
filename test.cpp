#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, max1, max2;

    for(i=0;i<n;i++) {
        if(arr[i] > max1 && arr[i] > max2) {
            cout<<1;
            max1 = arr[i];
            max2 = arr[i];
        }else if(arr[i] > max1 && arr[i] < max2){
            cout<<2;
        }else if(arr[i] > max1 && arr[i] == max2) {
            cout<<3;
        }else if(arr[i] < max1 && arr[i] < max2) {
            cout<<4;
        }else if(arr[i] < max1 && arr[i] > max2) {
            cout<<5;
        }else if(arr[i] < max1 && arr[i] == max2) {
            cout<<5;
        }else {
            cout<<6;
        }
    }
    
	return 0;
}
