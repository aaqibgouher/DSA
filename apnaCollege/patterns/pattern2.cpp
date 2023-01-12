#include<iostream>
using namespace std;

int main() {
    /*
        1. Inverted pattern: n = 4
        1 2 3 4
        1 2 3
        1 2 
        1
    */
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // for(int i=1; i<=n; ++i) {
    //     for(int j=1; j<=n-i+1; ++j) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
        2. 0 - 1 patter: n = 4
        1
        0 1
        1 0 1
        0 1 0 1
    */
//    int n;
//    cout << "Enter value of n:" << endl;
//    cin >> n;

//    for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=i; ++j) {
//             if((i+j) % 2 == 0) cout << "1 ";
//             else cout << "0 ";
//         }
//         cout << endl;
//    }

/*
    3. Rhombus pattern: n = 4
       * * * *
      * * * *
     * * * *
    * * * *
*/
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // for(int i=1; i<=n; ++i) {
    //     // print space
    //     for(int j=1; j<=n-i; ++j) {
    //         cout << "_ ";
    //     }
    //     for(int j=1; j<=n; ++j) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    /*
        4. Number pattern: n = 4
           1
          1 2
         1 2 3 
        1 2 3 4
    */
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // for(int i=1; i<=n; ++i) {
    //     // print space
    //     for(int j=1; j<=n-i; ++j) {
    //         cout << " ";
    //     }
    //     // print numbers
    //     for(int j=1; j<=i; ++j) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
        5. Palindromic pattern: n = 4
              1
            2 1 2
          3 2 1 2 3      
        4 3 2 1 2 3 4
    */
    // int n;
    // cout << "Enter value of n:" << endl;
    // cin >> n;

    // for(int i=1; i<=n; ++i) {
    //     // print space
    //     for(int j=1; j<=n-i; ++j) {
    //         cout << "_ ";
    //     }
    //     // print numbers half
    //     int k = i;
    //     for(int j=1; j<=i; j++) {
    //         cout << k << " ";
    //         --k;
    //     }
    //     // print numbers other half
    //     k = 2;
    //     if(i > 1) {
    //         for(int j=k; j<=i; ++j) {
    //             cout << j << " ";
    //             ++k;
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}