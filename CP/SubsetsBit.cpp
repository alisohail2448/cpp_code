#include <bits/stdc++.h>
using namespace std;

void subSets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[4] = {3, 4, 6, 7};
    subSets(arr, 4);
    return 0;
}