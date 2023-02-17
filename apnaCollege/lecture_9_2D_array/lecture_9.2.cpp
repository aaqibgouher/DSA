#include <iostream>
using namespace std;

int main()
{
    /*
        1. Transpose of a 2d matrix:
        eg: 1 2 3    1 4 7
            4 5 6 => 2 5 8
            7 8 9    3 6 9
    */

    // int row, col;

    // cout << "Enter row and col\n";
    // cin >> row >> col;

    // int arr[row][col];

    // cout << "Enter 2d array row wise\n";
    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // int temp;
    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = i; j < col; ++j)
    //     {
    //         temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }

    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    /*
        2. Matric multiplications
        eg: m1 = 1 2 3    m2 = 1 2 3     m1*m2 = order of 2 X 3
                 4 5 6         4 5 6
                               7 8 9
    */
    // int r1, c1, r2, c2;
    // cout << "Enter rows and columns of M1 and M2 matrix\n";
    // cin >> r1 >> c1 >> r2 >> c2;

    // int m1[r1][c1], m2[r2][c2], ans[r1][c2];

    // cout << "Enter first matrix M1\n";
    // for(int i=0; i<r1; ++i) {
    //     for(int j=0; j<c1; ++j) {
    //         cin >> m1[i][j];
    //     }
    // }

    // cout << "Enter second matric M2\n";
    // for(int i=0; i<r2; ++i) {
    //     for(int j=0; j<c2; ++j) {
    //         cin >> m2[i][j];
    //     }
    // }

    // for(int i=0; i<r1; ++i) {
    //     for(int j=0; j<c2; ++j) {
    //         ans[i][j] = 0;
    //     }
    // }

    // cout << "M3 = M1 * M2\n";
    // for(int i=0; i<r1; ++i) {
    //     for(int j=0; j<c2; ++j) {
    //         for(int k=0; k<r2; ++k) {
    //             ans[i][j] += m1[i][k] * m2[k][j];
    //         }
    //     }
    // }

    // for(int i=0; i<r1; ++i) {
    //     for(int j=0; j<c2; ++j) {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    /*
        3. Matrix search: (elements are arranged in ascending order in rows and columns)
        eg: given a matrix, and a search element, our task is to search an element in a matrix. if found return true else false.
        1 4 7 11
        2 5 8 12
        3 6 9 16
        10 13 14 17
    */
    // 1st approach: Brute force, iterate over matrix, and check if arr[i][j] = searchElement return true else false. O(n^2)
    /* 2nd approach: Since, the elements are in ascending order. We can use it. The whole approach will like, suppose we are at any
    position, lets say at 11, we have two options, 11 -> 7, 11 -> 12. Now, since searchElement  < 11, so we can only go to
    11 -> 7. Now, in this case, we will col--. Now, at 7, 7 -> 4 || 7 -> 8, again searchElement > 7, so we will go to 8 i.e row++;
    We will proceed the entira steps till row < n && col >= 0
    */
    // int row, col, search;
    // cout << "Enter row and col\n";
    // cin >> row >> col;

    // int arr[row][col];
    // cout << "Enter matrix element\n";
    // for(int i=0; i<row; ++i) {
    //     for(int j=0; j<col; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "Enter search element\n";
    // cin >> search;

    // // go to top right position
    // int i = 0, j = col - 1;
    // bool flag = false;

    // while(i < row && j >= 0) {
    //     // when arr[i][j] == search
    //     if(arr[i][j] == search) {
    //         flag = true;
    //         break;
    //     }
    //     // when arr[i][j] > search
    //     else if(arr[i][j] > search) {
    //         --j;
    //     }
    //     // when arr[i][j] < search
    //     else {
    //         ++i;
    //     }
    // }

    // if(flag) cout << "Element found at " << i << " " << j;
    // else cout << "Element not found";

    return 0;
}