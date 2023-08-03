#include <iostream>
using namespace std;

int divSum(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int out = divSum(arr, n, k);
    cout << out;
}