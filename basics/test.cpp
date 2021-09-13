#include<iostream>
#include<string>
using namespace std;

int main() {

    int a[] = {4, 0, 3, 0, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int i = 0, j = 0, k = 0, water = 0, count = 0, count1 = 0;

    for(i=0;i<n;i++) {
        count = 0;
        if(a[i] > 0) {
            for(j=i+1;j<n;j++) {
                if(a[j] > 0) {
                    if(a[j] >= a[i]) {
                        water += a[i]*count;
                        break;
                    }
                    
                    if(a[j] < a[i]) {
                        k = 0;
                        count1 = 0;
                        for(k=j+1;k<n;k++) {
                            if(a[k] > 0) {
                                if(a[k] > a[j]) {
                                    if(a[k] > a[i]) {
                                        water = water + a[i]*(count + count1) + (a[i] - a[j]);
                                        i = k - 1;
                                        break;
                                    }

                                    if(a[k] <= a[i]) {
                                        water = water + a[k]*(count + count1) + (a[k] - a[j]);
                                        i = k - 1;
                                        break;
                                    }
                                }
                            }else{
                                count1++;
                            }
                        }

                        if(k == n) {
                            water += a[j]*count;
                            break;
                        }

                        if(i == k-1) {
                            break;
                        }
                    }
                }else {
                    count++;
                }
            }
        }
    }

    cout<<"water remained is "<<water<<" litres..";

    return 0;
}