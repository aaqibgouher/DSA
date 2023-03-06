#include<iostream>
using namespace std;

class car {
    string owner;
    public:
    int price;
    string name;

    car(string own, int prc, string nm) {
        owner = own;
        price = prc;
        name = nm;
    }

    void getCarDetails() {
        cout << owner << " " << price << " " << name;
    }
};

class student {
    public:
    string name;
    int age;
    bool gender;

};

int main() {
    // basic class declartion, and access members
    // student std1;
    // std1.name = "First";
    // std1.age = 20;
    // std1.gender = 1;

    // cout << std1.name << " " << std1.age << " " << std1.gender;

    // create 3 students by taking user inputs
    // student st[3];
    // cout << "Enter student details\n";
    // for(int i=0; i<3; i++) {
    //     cout << "student" << i+1 << " name: \n";
    //     cin >> st[i].name;
    //     cout << "student" << i+1 << " age: \n";
    //     cin >> st[i].age;
    //     cout << "student" << i+1 << " gender: \n";
    //     cin >> st[i].gender;
    // }

    // // print all users 
    // for(int i=0; i<3; i++) {
    //     cout << st[i].name << " " << st[i].age << " " << st[i].gender << endl;
    // }

    // constructor in car class
    // car cr("me", 2000, "my name");
    // cr.getCarDetails();

    return 0;
}