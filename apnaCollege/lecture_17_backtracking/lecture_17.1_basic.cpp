#include<iostream>
using namespace std;

bool isSafe(int** arr, int i, int j, int n) {
    if(i < n && j < n && arr[i][j] == 1) {
        return 1;
    }

    return false;
}

bool ratInMaze(int** arr, int i, int j, int n, int** solArr) {
    if(i == n-1 && j == n-1) {
        solArr[i][j] = 1;
        return true;
    }

    if(isSafe(arr, i, j, n)) {
        solArr[i][j] = 1;
        if(ratInMaze(arr, i, j+1, n, solArr)) {
            return true;
        }

        if(ratInMaze(arr, i+1, j, n, solArr)) {
            return true;
        }

        solArr[i][j] = 0;
        return false;
    }

    return false;
}

bool isQueenSafe(int** ans, int i, int j, int n) {
    // checking in row
    for(int row=0; row<i; row++) {
        if(ans[row][j] == 1) {
            return false;
        }
    }

    // checking in diagonal
    // for left upper
    int row = i;
    int col = j;
    while(row >= 0 && col >= 0) {
        if(ans[row][col] == 1) {
            return false;
        }
        row--;
        col--;
    }

    // for right upper
    row = i;
    col = j;
    while(row >= 0 && col < n) {
        if(ans[row][col] == 1) {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nQueens(int** ans, int x, int n) {
    if(x >= n) {
        return true;
    }
    
    // if queen can be placed at that col
    for(int col=0; col<n; col++) {
        if(isQueenSafe(ans, x, col, n)) {
            ans[x][col] = 1;

            if(nQueens(ans, x+1, n)) {
                return true;
            }

            ans[x][col] = 0;
        }
    }

    return false;
}

int main() {
    /*
        1. Rat In Maze using backtracking:
        [ ][0][ ][0][ ]
        [ ][ ][ ][ ][ ]
        [0][ ][0][ ][0]
        [ ][0][0][ ][ ]
        [ ][ ][ ][0][ ]

        eg: given n = 4, and 0 represents block. Therefore, rat can move only in empty blocks. 
        approach: 1) we will check that, rat is safe on (i, j) or not. We will make a function called isSafe(arr, i, j, n), 
        and will check if, i < n && j < n && arr[i][j] == 1 returh true else false. 
        2) if it is safe, we will mark our answer arr, which will be default 0, to 1. Now, from here rat can move only right
        and below, we will call the same function, by chaning i and j. if j+1 is also true, retur true, again if i+1 is true, 
        return true. if non of them is true, means not allowed to go further, we will make the current to 0, and return false.
    */
    // int n;
    // cout << "Enter value of n\n";
    // cin >> n;

    // // dynamic memory allocation
    // int **arr = new int*[n];
    // for(int i=0; i<n; i++) {
    //     arr[i] = new int[n];
    // }

    // cout << "Enter 2d array\n";
    // // take 1 0 array from user
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // // allocating memory for solutionArr, setting 0 by default
    // int **solArr = new int*[n];
    // for(int i=0; i<n; i++) {
    //     solArr[i] = new int[n];
    //     for(int j=0; j<n; j++) {
    //         solArr[i][j] = 0;
    //     }
    // }

    // // if rat can reach the destination, then print
    // if(ratInMaze(arr, 0, 0, n, solArr)) {
    //     cout << "Possible way can be\n";
    //     for(int i=0; i<n; i++) {
    //         for(int j=0; j<n; j++) {
    //             cout << solArr[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    /*
        2. N-Queen problem:
        [ ][Q][ ][ ]
        [ ][ ][ ][Q]
        [Q][ ][ ][ ]
        [ ][ ][Q][ ]
    */
    int n;
    cout << "Enter number of queens\n";
    cin >> n;

    int** ans = new int*[n];
    for(int i=0; i<n; i++) {
        ans[i] = new int[n];
        for(int j=0; j<n; j++) {
            ans[i][j] = 0;
        }
    }

    if(nQueens(ans, 0, n)) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}