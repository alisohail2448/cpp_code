#include <bits/stdc++.h>
using namespace std;



int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main()
{
    int even[6] = {1, 3, 3, 3, 3, 7};

    cout << "First Occurrence of 3 at Index " << firstOcc(even, 6, 3) << endl;
    cout << "Last Occurrence of 3 at Index " << lastOcc(even, 6, 3) << endl;
    return 0;
}