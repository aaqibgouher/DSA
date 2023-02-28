#include<iostream>
using namespace std;

void permutation(string str, string ans) {
    if(str.length() == 0) {
        cout << ans << endl;
        return;
    }

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i+1);

        permutation(ros, ans + ch);
    }

}

int mazePossibleWays(int n, int i, int j) {
    if(i == n-1 && j == n-1) return 1;

    if(i > n-1 || j > n-1) return 0;

    return mazePossibleWays(n, i, j+1) + mazePossibleWays(n, i+1, j);
}

int tiling(int n) {
    if(n == 0) return 0;

    if(n == 1) return 1;

    return tiling(n-1) + tiling(n-2);
}

int main() {
    /*
        1. Print all possible permutation of a string:
        eg: str = ABC
        ABC, ACB, BAC, BCA, CAB, CBA
    */

    // string str;
    // cout << "Enter a string\n";
    // cin >> str;

    // permutation(str, "");

    /*
        2. Count number of paths possible in a maze:
        eg: n = 3
         _ _ _
        |_|_|_|
        |_|_|_|
        |_|_|_|

        anser will be 6
    */
    // int n;
    // cout << "Enter maze size\n";
    // cin >> n;

    // cout << mazePossibleWays(n, 0, 0);

    /*
        3. Tiling problem: given a 2 x n board, and tiles of size 2 x 1, count the the number of ways to tile the given board using tiles;
        eg: 2 x 4, and 2 x 1, then vertical = 1, horizontal = 1, and horizontal + vertical = 1, so total = 3
    */
    int n;
    cout << "Enter value of n\n";
    cin >> n;

    cout << tiling(n);

    return 0;
}