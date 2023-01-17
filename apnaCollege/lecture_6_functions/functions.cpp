#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i=1; i<=n; ++i) {
        fact *= i;
    }

    return fact;
}

int sum (int x, int y) {
    return x + y;
}

int main() {
    // 1. Factorial using functions
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // cout << "Factorial of " << n << " is " << factorial(n);

    // 2. Addition of two numbers using functions
    // int x, y;
    // cout << "Enter two numbers:" << endl;
    // cin >> x >> y;

    // cout << "Sum of " << x << " and " << y << " is " << sum(x, y); 

    return 0;
}