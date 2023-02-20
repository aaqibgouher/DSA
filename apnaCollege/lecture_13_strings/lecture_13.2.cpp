#include<iostream>
using namespace std;

int main() {
    /*
        1. Lowercase and uppercase of string: 
        difference between ascii value of a and A = 32, so if we want in uppercase, just do a - 32 else for lowercase A + 32
    */
    // string sentence = "this is my sentence";

    // // convert each value to upper case
    // for(int i=0; i<sentence.length(); ++i) {
    //     if(sentence[i] >= 'a' && sentence[i] <= 'z') {
    //         sentence[i] = sentence[i] - 32;
    //     }
    // }

    // cout << sentence << endl;

    // // convert to lowercase
    // for(int i=0; i<sentence.length(); ++i) {
    //     if(sentence[i] >= 'A' && sentence[i] <= 'Z') {
    //         sentence[i] = sentence[i] + 32;
    //     }
    // }

    // cout << sentence;

    /*
        2. lowercase and uppercase using in-built function: transform()
    */
    // string name = "this is my name";
    // transform(name.begin(), name.end(), name.begin(), ::toupper);
    // cout << name << endl;
    // transform(name.begin(), name.end(), name.begin(), ::tolower);
    // cout << name;

    /*
        3. Form the biggest number from the numeric string: 
        eg: "53214", output: "54321"
    */
    // string num = "12345";
    // sort(num.begin(), num.end(), greater<int>());
    // cout << num;

    /*
        4. Find max frequence of a character in a string:
        eg; "abcacbade", output: freq = 3, output = 3
    */
    // string str = "abcacbade";
    // int max1 = INT_MIN, max2 = INT_MIN;
    // char ch1 = str[0], ch2 = str[0];

    // sort(str.begin(), str.end());

    // for(int i=0; i<str.length(); ++i) {
    //     if()
    // }


    return 0;
}