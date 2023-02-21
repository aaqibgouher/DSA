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
    // 1st
    // string str = "aaaaaaabbbbaaaa";

    // sort(str.begin(), str.end()); // aaabbbcc
    // char c1 = str[0], c2 = '\0';
    // int count = 0, maxChar = INT_MIN;

    // for(int i=0; i<str.length(); ++i) {
    //     if(c1 == str[i]) {
    //         count ++;
    //     } else {
    //         if(maxChar < count) {
    //             maxChar = count;
    //             c2 = str[i-1];
    //         }
    //         // maxChar = max(maxChar, count);
    //         count = 1;
    //         c1 = str[i];
    //     }
    // }

    // cout << maxChar << " " << c2;

    // 2nd approach
    // string str = "aaabaaabaaa";
    // char ch;

    // int freq[26], maxChar = INT_MIN;

    // for(int i=0; i<26; ++i) {
    //     freq[i] = 0;
    // }

    // for(int i=0; i<str.length(); ++i) {
    //     freq[str[i] - 'a'] ++;
    // }

    // for(int i=0; i<str.length(); ++i) {
    //     if(maxChar < freq[i]) {
    //         maxChar = freq[i];
    //         ch = i + 'a';
    //     }
    // }

    // cout << maxChar << " " << ch;
    

    return 0;
}