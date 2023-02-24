#include<iostream>
using namespace std;

int Sum(int n) {
    if(n == 0) return 0;

    return n + Sum(n-1);
}

int power(int n, int p) {
    if(p ==  0) return 1;

    return n * power(n, p-1);
}

int fact(int num) {
    if(num == 1) return 1;

    return num * fact(num-1);
}

int fibonacci(int num) {

    if(num == 0 || num == 1) return num;

    return fibonacci(num-1) + fibonacci(num-2);
}

int main() {
    /*
        1. Find sum using recurssion:
    */
    // int n;
    // cout << "Enter number\n";
    // cin >> n;

    // cout << Sum(n);

    /*
        2. Calculate n raised to power of p: 
        eg: 10^5 = 10 * 10 * 10 * 10 * 10
    */
    // int n, p;
    // cout << "Enter the value of n and p\n";
    // cin >> n >> p;

    // cout << power(n, p);

    /*
        3. Find factorial of a number n:
        fact = n * fact(n-1);
    */

    // int num;
    // cout << "Enter the number\n";
    // cin >> num;

    // cout << fact(num);

    /*
        4. Print the nth fibonacci number:
        eg: 0 1 1 2 3 5 8 13, for n = 5, ans = 5
    */
    // int num;
    // cout << "Enter a number\n";
    // cin >> num;
    
    // cout << fibonacci(num);

    return 0;
}