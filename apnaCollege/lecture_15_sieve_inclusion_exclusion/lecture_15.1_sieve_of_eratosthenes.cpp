#include<iostream>
using namespace std;

void sieveOfEratosthenes(int num) {
    // initialize an array from 2 to num
    int arr[num + 1];

    for(int i=0; i<=num; ++i) {
        arr[i] = 0;
    }

    // iterate over an array
    for(int i=2; i<=num; ++i) {
        // if element is not marked
        if(arr[i] == 0) {
            // find the multiples, and marked to 1
            for(int j=i*i; j<=num; j+=i) {
                arr[j] = 1;
            }
        }
    }

    // loop over an array, and print unmarked i.e prime
    for(int i=2; i<= num; ++i) {
        if(arr[i] == 0) cout << i << " ";
    }
}

void primeFactorUsingSieve(int n) {
    int spf[n+1];

    // initialize with the index
    for(int i=2; i<=n; ++i) {
        spf[i] = i;
    }

    // iterate over spf, and set the smallest prime factor for an index
    for(int i=2; i<=n; ++i) {
        if(spf[i] == i) {
            for(int j=i*i; j<=n; j+=i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }

    while(n != 1) {
        cout << spf[n] << " ";
        n /= spf[n];
    }
}

int main() {
    /*
        1. Sieve Of Eratosthenes; A method to find all possible prime numbers in a given range. 
        Basically, first we create the n size of array, initializing with values from 2 to n. 
        Now, we start looping from 2, and mark the multiples of i, so the very first multiple will be i^2. 
        After marking all the multiples, we left with only prime number;
    */
    // int n;
    // cout << "Enter the number\n";
    // cin >> n;

    // sieveOfEratosthenes(n);

    /*
        2. Prime factorization using Sieve: 
        eg: 20 = 2 * 2 * 5 * 1
        Approach: Lets say n = 20, take an array spf[n+1] = i, start iterating over spf, from 2 to n, and check whether spf[i] == i
        if true, then iterate once again, and mark all the smallest prime factor, and on the index, take its value. Again, mark
        only when, spf[j] = j. Eg. in case of 2, at index 4, value will be 2, it means, for 4, spf is 2, similarly for 6, 
        spf[6] = 2. It shows the smalles prime fact for the index. Now, we will just iterate untill our num = 1, print spf[num]
        and num = num / spf[num]
    */
    int num;

    cout << "Enter your num\n";
    cin >> num;

    primeFactorUsingSieve(num);
    


    return 0;
}