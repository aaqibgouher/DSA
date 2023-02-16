#include <iostream>
using namespace std;

int main()
{

    // 1. Input and output of 2d Array:
    // int row, col;

    // cout << "Enter row and column\n";
    // cin >> row >> col;

    // int arr[row][col];
    // cout << "Enter array element row wise\n";

    // // input
    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // // output
    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2. Searching an element in 2d array:
    // int row, col;

    // cout << "Enter row and col\n";
    // cin >> row >> col;

    // int arr[row][col];

    // cout << "Enter array element row wise\n";
    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // int search;
    // cout << "Enter search element\n";
    // cin >> search;

    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         if(arr[i][j] == search) {
    //             cout << "Element found at row = " << i << " and col = " << j;
    //             return 0;
    //         }
    //     }
    // }

    /* 3. Print 2d array in spiral order:
        eg: 1 2 3
            4 5 6
            7 8 9

        spiral order => 1 2 3 - 6 9 - 8 7 - 4 - 5
    */
    // int row, col;

    // cout << "Enter row and col\n";
    // cin >> row >> col;

    // int arr[row][col];

    // cout << "Enter 2d array element row wise\n";
    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // int rowStart = 0, rowEnd = row - 1, colStart = 0, colEnd = col - 1;

    // while(rowStart <= rowEnd && colStart <= colEnd) {
    //     // for rowStart
    //     for(int i=colStart; i<=colEnd; ++i) {
    //         cout << arr[rowStart][i] << " ";
    //     }

    //     rowStart ++;

    //     // for colEnd
    //     for(int i=rowStart; i<=rowEnd; ++i) {
    //         cout << arr[i][colEnd] << " ";
    //     }

    //     colEnd --;

    //     // for rowEnd
    //     for(int i=colEnd; i>=colStart; --i) {
    //         cout << arr[rowEnd][i] << " ";
    //     }

    //     rowEnd --;

    //     // for colStart
    //     for(int i=rowEnd; i>=rowStart; --i) {
    //         cout << arr[i][colStart] << " ";
    //     }

    //     colStart ++;
    // }

    return 0;
}