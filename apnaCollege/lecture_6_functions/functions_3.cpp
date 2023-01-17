#include<iostream>
#include<math.h>
using namespace std;

int sum(int n) {
    return n*(n+1) / 2;
}

void checkPythagorianTriplet(int h, int b, int hyp) {
    if(pow(h, 2) + pow(b, 2) == pow(hyp, 2)) cout << "Pythagorean triplet";
    else cout << "Not Pythagorean triplet";
}

int octalToDecimal(int num) {
    int rem, i=0, sum = 0;

    while(num) {
        rem = num % 10;
        sum += rem * pow(8, i);
        num /= 10;
        ++i;
    }

    return sum;
}

int main() {

    // 1. Sum of first n natural number: 
    // int n;
    // cout << "Enter value of n" << endl;
    // cin >> n;
    // cout << "Sum of first " << n << " natural no is " << sum(n);

    // 2. Check pythogorian triplet: b^2 + h^2 = hyp^2
    // int h, b, hyp;
    // cout << "Enter height, base and hypotaneous:" << endl;
    // cin >> h >> b >> hyp;

    // checkPythagorianTriplet(h, b, hyp);

    // 3. Convert octal to decimal: ()8 -> ()10, simply multiply each digit to 8^i, and then add
    // int n;
    // cout << "Enter number" << endl;
    // cin >> n;
    // cout << n <<"(8) = " << octalToDecimal(n) << "(10)";

    return 0;
}