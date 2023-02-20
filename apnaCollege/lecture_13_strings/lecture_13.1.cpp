#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    /*
        1. Basics
    */
    // string name = "Aaqib", name1(5, 'a');
    // cout << name << " " << name1;

    // take sentence as an input, also to clear value
    // string sentence;
    // cout << "Enter sentence\n";
    // getline(cin, sentence);
    // cout << sentence << endl;
    // sentence.clear();
    // cout << sentence;

    // compare function in strings: if matches, then returns 0, else < 0 and > 0
    // string str1 = "hello", str2 = "hellog";
    // cout << str2.compare(str1);

    // check if string is empty or not
    // string str1 = " ";
    // if(str1.empty()) cout << "String is empty";
    // else cout << "String is not empty";

    // erase function:
    // string name = "this is my name";
    // name.erase(3, 3);

    // cout << name;

    // find function: return first found index
    // string str = "this is my sentenece";
    // cout << str.find("is");

    // insert function: delete in between of string
    // string name = "My name Aaqib";
    // name.insert(8, "is ");
    // cout << name;

    // get substring of string:
    // string name = "this is my name";
    // cout << name.substr(0, 4);

    // convert string to integer:
    // string str = "123";
    // int x = stoi(str);
    // cout << x + 2;

    // convert integer to string
    // int x = 123;
    // cout << to_string(x) + "2";

    // sort a string: using algorithm header file
    // string str = "gjhskdfsjkfnkaacdsfd";
    // sort(str.begin(), str.end());
    // cout << str;

    return 0;
}