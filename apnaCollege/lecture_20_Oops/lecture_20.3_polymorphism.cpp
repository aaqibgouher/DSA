#include<iostream>
using namespace std;

class Poly {
    public:

    void add() {
        cout << "No parameter\n";
    }

    void add(int a, int b) {
        cout << a + b << endl;
    }

    void add(string a, string b) {
        cout << a + b << endl;
    }
};

int main() {
    Poly p;
    p.add();
    p.add(5, 10);
    p.add("first", "second");

    return 0;
}