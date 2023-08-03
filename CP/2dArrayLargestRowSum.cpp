#include <bits/stdc++.h>
using namespace std;


int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
        
    }
    cout<<"Maximum Sum of Row is "<<maxi<<endl;
    return rowIndex;
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
            cout << arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Index of largest row sum "<<largestRowSum(arr, 3, 3)<<endl;

    return 0;
}