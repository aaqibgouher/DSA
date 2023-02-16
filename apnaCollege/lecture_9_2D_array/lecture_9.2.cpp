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

    int row, col;

    cout << "Enter row and col\n";
    cin >> row >> col;

    int arr[row][col];

    cout << "Enter 2d array row wise\n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int temp;
    for (int i = 0; i < row; ++i)
    {
        for (int j = i; j < col; ++j)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}