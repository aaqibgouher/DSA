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

    return 0;
}