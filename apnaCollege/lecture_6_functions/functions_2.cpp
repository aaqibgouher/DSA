#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); ++i) {
        if(n % i == 0) return false;
    }

    return true;
}

void allPrime(int num1, int num2) {
    for(int i=num1; i<=num2; ++i) {
        if(isPrime(i)) cout << i << " ";
    }
}

void fibonacci(int n) {
    int num1 = 0, num2 = 1, num3;

    for(int i=1; i<=n; ++i) {
        cout << num1 << " ";
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
}

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; ++i) {
        fact *= i;
    }

    return fact;
}

int findNCR(int n, int r) {
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main() {
    // 1. Prime numbers between two numbers: 
    // int num1, num2;
    // cout << "Enter two numbers:" << endl;
    // cin >> num1 >> num2;
    // allPrime(num1, num2);

    // 2. Fibonacci sequence: n = 5, 0 1 1 2 3
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // fibonacci(n);

    // 3. Factorial: 
    // int n;
    // cout << "Enter value of n" << endl;
    // cin >> n;
    // cout << "Factorial of " << n << " is " << factorial(n);

    // 4. Calculate nCr: nCr = n! / ((n-r)! * r!)
    // int n, r;
    // cout << "Enter value of n and r" << endl;
    // cin >> n >> r;

    // cout << findNCR(n, r);

    // 5. Pascal's triangle: n = 5
    /*

        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1

    */
//    int n;
//    cout << "Enter value of n:" << endl;
//    cin >> n;

//    for(int i=0; i<n; ++i) {
//         for(int j=0; j<=i; ++j) {
//             cout << findNCR(i, j) << " ";
//         }
//         cout << endl;
//    }

    return 0;
}