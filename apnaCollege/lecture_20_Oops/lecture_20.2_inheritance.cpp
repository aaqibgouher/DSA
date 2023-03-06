#include<iostream>
using namespace std;

class A {
    public:
    void print() {
        cout << "Inherited";
    }
};

class B : public A {
};

class C {
    public:
    void print() {
        cout << "Inherited";
    }
};

class D {
    public:
    void printFromD() {
        cout << "Inherited";
    }
};

class E: public C, public D {
};

class F {
    public:
    void printF() {
        cout << "Inherited F\n";
    }
};

class G: public F {
    public:
    void printG() {
        cout << "Inherited G\n";
    }
};

class H: public G {
    public:
    void printH() {
        cout << "Inherited H\n";
    }
};

int main() {
    // 1. single inheritance:
    // B b;
    // b.print();

    // 2. Multiple inheritance
    // E eObj;
    // eObj.print();
    // eObj.printFromD();

    // Multi level
    H hObj;
    hObj.printF();
    hObj.printG();
    hObj.printH();


    return 0;
}