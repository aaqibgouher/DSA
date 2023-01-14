#include<iostream>
#include<cmath>
#include<stdint.h>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int reverseNumber(int num) {
    int i=0, newNum = 0, rem;

    while(num) {
        // remainder
        rem = num % 10;
        newNum = newNum * 10 + rem;
        num = num / 10;
        i++;
    }

    return newNum;
}

bool isArmstrong(int num) {
    int rem, remCube = 1, sum = 0, numVal = num;

    while(num) {
        rem = num % 10;
        remCube = pow(rem, 3);
        sum = sum + remCube;
        num = num / 10;
    }
    
    if(numVal == sum) return true;
    else return false;
}

int main() {
    // 1. prime numbers
    // int n;
    // cout << "Enter any number:" << endl;
    // cin >> n;

    // if(isPrime(n)) cout << "Prime number";
    // else cout << "Not prime number";

    // 2. Reverse a given number
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // cout << n << " " << reverseNumber(n);

    // 3. Armstrong number: It is the sum of cube of each digit of the number. Eg: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // if(isArmstrong(n)) cout << "Armstrong number";
    // else cout << "Not Armstrong number";

    return 0;
}