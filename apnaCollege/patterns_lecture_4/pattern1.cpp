#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    /*
        1. Rectangle pattern: row = 4, col = 4
        * * * * 
        * * * *
        * * * *
        * * * *
    */
//    int row, col;
//    cout << "Enter the value of row and col:" << endl;
//    cin >> row >> col;

//    for(int i=1; i<=row; i++) {
//         for(int j=1; j<=col; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//    }

    /*
        2. Hollow Rectangle patter: row = 4, col = 4
        * * * *
        *     *
        *     *
        * * * *
    */
//    int row, col;

//    cout << "Enter the row and col:" << endl;
//    cin >> row >> col;

//    for(int i=1; i<=row; ++i) {
//         for(int j=1; j<= col; ++j) {
//             if(i == 1 || i == row || j == 1 || j == col) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//    }

    /*
        3. Inverted Half Pyramid: n = 4
        * * * *
        * * *
        * *
        * 
    */

//    int n;
//    cout << "Enter value of n" << endl;
//    cin >> n;

//    for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=n-i+1; ++j) {
//             cout << "* ";
//         }
//         cout << endl;
//    }

    /*
        4. Half pyramid after 180 rotation: n = 4
              *
            * *
          * * *
        * * * *
    */

//    int n;
//    cout << "Enter value of n:" << endl;
//    cin >> n;

//    for(int i=1; i<=n; ++i) {
//         // print space (_ is space)
//         for(int j=1; j<=n-i; ++j) {
//             cout << "_ ";
//         }

//         // print stars
//         for(int j=1; j<=i; ++j) {
//             cout << "* ";
//         }

//         cout << endl;
//    }

    /*
        5. Half pyramid using numbers: n = 4
        1
        2 2
        3 3 3
        4 4 4 4
    */

    // int n;
    // cout << "Enter value of n" << endl;
    // cin >> n;

    // for(int i=1; i<=n; ++i) {
    //     for(int j=1; j<=i; j++) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    /*
        6. Floyd's triangle: n = 4
        1
        2 3
        4 5 6
        7 8 9 10
    */
//    int n, counter = 1;
//    cout << "Enter value of n:" << endl;
//    cin >> n;

//    for(int i=1; i<=n; ++i) {
//         for(int j=1; j<=i; ++j) {
//             cout << counter << " ";
//             ++counter;
//         }
//         cout << endl;
//    }

    /*
        7. Butterfly pattern: n = 4
        *             *
        * *         * *
        * * *     * * *
        * * * * * * * *
        * * * * * * * *
        * * *     * * *
        * *         * *
        *             *
    */

    // int n;
    // cout << "Enter value of n" << endl;
    // cin >> n;

    // // upper half of butterfly
    // for(int i=1; i<=n; ++i) {
    //     // print *
    //     for(int j=1; j<=i; ++j) {
    //         cout << "* ";
    //     }
    //     // print space
    //     for(int j=1; j<=(pow(2, n-1) - 2*i); ++j) {
    //         cout << "_ ";
    //     }
    //     // print *
    //     for(int j=1; j<=i; ++j) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // lower half of butterfly
    // for(int i=n; i>=1; --i) {
    //     // print *
    //     for(int j=1; j<=i; ++j) {
    //         cout << "* ";
    //     }
    //     // print space
    //     for(int j=1; j<=(pow(2, n-1) - 2*i); ++j) {
    //         cout << "_ ";
    //     }
    //     // print *
    //     for(int j=1; j<=i; ++j) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}