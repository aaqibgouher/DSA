#include<iostream>
#include<string>
using namespace std;

int get_sum(int a, int b) {
    return a + b;
}

void say_hello(string name = "User") {
    cout<<"Hello "+name;
}

void get_bio(string name, int age) {
    cout<<"name is "<<name<<" and age is "<<age;
}

void swap(int *a, int *b) {
    int k = *a;
    *a = *b;
    *b = k;
}

int get_value(int a) {
    return a;
}

string get_value(string name) {
    return name;
}

int main() {
    // 1. new line \n or endl
    // cout<<"this is my first c++ program."<<endl;
    // cout<<"this is my first c++ program.";

    // 2. variables
    // int a = 10;
    // float b = 10.236768;    
    // double c = 99.121263;
    // char d = '+';
    // char name[10] = "Aaqib";
    // bool is_true = true;

    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<name<<" "<<is_true;  

    // 3. user input
    // int a, b;
    // cout<<"Enter the values of a and b :\n";
    // cin>>a>>b;
    // cout<<"sum is "<<a+b;

    // 4. string data type, use string header
    // string name = "Aaqib";
    // cout<<name;

    // concatenate two strings:
    // string first_name = "Aaqib";
    // string last_name = "Gouher";
    // cout<<first_name+" "+last_name;

    // append two strings
    // string first_name = "Aaqib";
    // string last_name = "Gouher";
    // cout<<first_name.append(" ").append(last_name);

    // string length or size same
    // string name = "Aaqib";
    // cout<<name.length();

    // user input string(cin removes the white spaces)
    // string name;
    // cout<<"Enter your name :\n";
    // cin>>name;
    // cout<<"your name is "+name;

    // user input string(getline accepts the white spaces too)
    // string name;
    // cout<<"Enter your name :\n";
    // getline(cin, name);
    // cout<<name;

    // 5. for using maths functions, use the header named as #include<cmath>

    // 6. switch statement
    // char letter = 'c';

    // switch(letter) {
    //     case 'a' :
    //         cout<<"apple";
    //         break;
    //     case 'b' :
    //         cout<<"banana";
    //         break;
    //     default:
    //         cout<<"fruits";
    // }

    // 7. loops
    // while
    // int i = 0;

    // while(i != 5) {
    //     cout<<i<<" ";
    //     i++;
    // }

    // for
    // int i = 0;

    // for(i=0;i<5;i++) {
    //     cout<<i<<" ";
    // }

    // do while
    // int i = 0;

    // do{
    //     cout<<i<<" ";
    //     i++;
    // } while(i != 5);

    // 8. array
    // string array
    // string cars[] = {"tata", "volvo", "bmw"};
    // int n = sizeof(cars)/sizeof(cars[0]);
    
    // for(int i=0;i<n;i++) {
    //     cout<<cars[i]<<" ";
    // }

    // 9. reference variable
    // string name = "aaqib";
    // string &reference_variable = name;

    // cout<<name<<" "<<reference_variable;

    // int num = 10;
    // int &reference_num = num;

    // cout<<num<<" "<<reference_num;

    // 10. memory address, &num is giving the address where it is stored in the memory;
    // int num = 10;
    // cout<<&num;     

    // 11. pointer
    // int num = 5;
    // int *num_ptr = &num;

    // cout<<*num_ptr<<" "<<num_ptr<<" "<<&num;  

    // string name = "aaqib";
    // string *name_ptr = &name;

    // cout<<*name_ptr<<" "<<name_ptr<<" "<<&name;

    // modifying pointer value
    // int num = 10;
    // int *num_ptr = &num;

    // cout<<*num_ptr<<" ";
    // *num_ptr = 15;
    // cout<<*num_ptr<<" "<<num;

    // 12. functions:

    // int a = 5, b = 10;

    // cout<<get_sum(a, b);

    // default value in function
    // string name = "aaqib";

    // say_hello(name);
    // say_hello();

    // multiple data type parameter
    // int age = 20;
    // string name = "aaqib";

    // get_bio(name, age);

    // pass by reference
    // int a = 10, b = 20;

    // cout<<a<<" "<<b<<"\n";
    // swap(&a, &b);
    // cout<<a<<" "<<b<<"\n";
    
    // function overloading
    // int a = 10;
    // string name = "aaqib";

    // cout<<get_value(a);
    // cout<<get_value(name);

    return 0;
}