#include<iostream>
using namespace std;

void swap(int *p, int *q) {
    int k = *p;
    *p = *q;
    *q = k;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << a << " " << b;

    return 0;
}