#include <bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColSum(int arr[][3], int row, int col)
{
    for (int j = 0; j < row; j++)
    {
        int sum = 0;
        for (int i = 0; i < col; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    printRowSum(arr, 3, 3);
    cout << endl;
    printColSum(arr, 3, 3);

    return 0;
}