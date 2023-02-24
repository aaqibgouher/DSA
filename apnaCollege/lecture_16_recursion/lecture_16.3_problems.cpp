#include<iostream>
using namespace std;

void reverseStr(string name, int len, int i) {
    if(name[i] == '\0') return;

    reverseStr(name, len, i+1);

    cout << name[i] << endl;

    if(i == -1) return;
}

// replace pi using replace function
// void replacePI(string name, int len, int i) {
//     if(name[i] == '\0') return;

//     if(name[i] == 'p' && name[i+1] == 'i') {
//         cout << name.replace(i, 2, "3.14") << endl;
//     }

//     replacePI(name, len, i+1);
// }

void replacePI(string name, int len, int i) {
    if(name[i] == '\0') return;

    if(name[i] == 'p' && name[i+1] == 'i') {
        cout << "3.14";
        i += 1;
    } else {
        cout << name[i];
    }

    replacePI(name, len, i+1);
}

int main() {
    /*
        1. Reverse a string using recursion:
        eg: str = "binod"
        output: donib
    */
    // string name;
    // cout << "Enter your name\n";
    // cin >> name;
    // int len = name.length()-1;

    // reverseStr(name, len, 0);

    /*
        2. Replace Pi with 3.14 in string
        eg: input=  pippxxppiixipi, output= 3.14ppxxp3.14ixi3.14
    */
    // 1st approach
    // string word;
    // cout << "Enter your word\n";
    // cin >> word;

    // for(int i=0; i<word.length(); ++i) {
    //     if(word[i] == 'p' && word[i+1] == 'i') {
    //         word.replace(i, 2, "3.14");
    //     }
    // }

    // cout << word;

    // 2nd approach using recusion
    string word;
    cout << "Enter your word\n";
    cin >> word;
    int len = word.length();

    replacePI(word, len-1, 0);

    return 0;
}