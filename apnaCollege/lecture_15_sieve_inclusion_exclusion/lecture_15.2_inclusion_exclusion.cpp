#include<iostream>
#include<cmath>
using namespace std;

void divisible(int num, int a, int b) {
    int countFor5 = num / a, countFor7 = num / b, coundFor5And7 = num / (a*b);

    cout << "Total count is " << countFor5 + countFor7 - coundFor5And7;
}

void findGCDEuclid(int num1, int num2) {
    int temp1 = num1, temp2 = num2;
    int diff = temp1 - temp2;
    while(diff != 0) {
        temp1 = temp2;
        temp2 = diff;
        diff = abs(temp1 - temp2);
    }

        cout << "GCD is " << temp1;
}

int main() {
    /*
        1. How many numbers between 1 and 100 are divisible by 5 or 7:
            divisible by 5 = 5, 10, 15, 20, 25, 30, 35, --- 100 = count(20)
            divisible by 7 = 7, 14, 21, 28, 35 --- = count = (x)
            divisible by 5 and 7 = 35, 70 (2)
            total number = count(div by 5) + count(div by 7) - count(div by 5 and 7) = ans
    */
    // int num, a, b;
    // cout << "Enter num\n";
    // cin >> num >> a >> b;

    // divisible(num, a, b);

    /*
        2. Euclid Algorithm to find GCD(HCF)
        eg: 24 = 2 * 2 * 2 * 3      2 * 3 = 6 = GCD
            42 = 2 * 3 * 7

        using algorithm: If we take a difference between both number, GCD does not change, for 42 and 24, GCD = 6, similarly
        for 24 and 18, GCD = 6, for 18 & 6, GCD = 6, for 12 & 6 GCD is 6, again, for 6 & 6 GCD is 6. 
        42 - 24 = 18
        24 - 18 = 6
        18 - 6 = 12
        12 - 6 = 6
        6 - 6 = 0, so first number will be the GCD

        similarly we can do this with %
        42 % 24 = 18
        24 % 18 = 6
        18 % 6 = 0, so second number will be the GCD
    */
    int num1, num2;
    cout << "Enter two numbers for GCD\n";
    cin >> num1 >> num2;

    findGCDEuclid(num1, num2);

    return 0;
}