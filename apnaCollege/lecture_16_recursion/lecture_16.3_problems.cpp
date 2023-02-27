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

void towerOfhanoi(int n, char source, char destination, char helper) {
    if(n == 0) return;

    towerOfhanoi(n-1, source, helper, destination);
    cout << "Move from " << source << " to " << destination << endl;
    towerOfhanoi(n-1, helper, destination, source);
}

string removeDuplicate(string str) {
    if(str.length() == 0) return "";

    char ch = str[0];
    string restStr = removeDuplicate(str.substr(1));

    if(ch == restStr[0]) {
        return restStr;
    }

    return ch + restStr;
}

string moveXToEnd(string str) {
    if(str.length() == 0) return "";

    char ch = str[0];
    string restStr = moveXToEnd(str.substr(1));

    if(ch == 'x') {
        return restStr + ch;
    }
    
    return ch + restStr;
}

void allSubStr(string str, int i, int j) {
    if(i == str.length()) return;

    if(i == j) cout << str[i] << " ";
    else cout << str[i] << str[j] << " ";

    if(j == str.length()) {
        allSubStr(str, i+1, i+1);
    } else {
        allSubStr(str, i, j+1);
    }
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

    // 2nd approach using recusionr
    // string word;
    // cout << "Enter your word\n";
    // cin >> word;
    // int len = word.length();

    // replacePI(word, len-1, 0);

    /*
        3. Tower of hanoi: 
    */
    // int n;
    // cout << "Enter number\n";
    // cin >> n;

    // towerOfhanoi(n, 'S', 'D', 'H');  // source, destination and helper

    /*
        4. Remove all duplicates from the string: 
        string = aaaabbbcccddd, output = abcd
    */
    // string str;
    // cout << "Enter string\n";
    // cin >> str;
    // int len = str.length();

    // cout << removeDuplicate(str);

    /*
        5. Move all x to the end of the string:
        eg: str = axxbdxcefchix, output: abdcefhixxxx
    */

    // string str;

    // cout << "Enter a string\n";
    // cin >> str;

    // int len = str.length();

    // cout << moveXToEnd(str);

    /*
        6. Generate all substrings of a string:
        eg: str = ABC, 
        output: "", "A", "B", "C", "AB", "AC", "BC", "ABC"
    */
    string str;
    cout << "Enter a string\n";
    cin >> str;

    allSubStr(str, 0, 0);
    

    return 0;
}