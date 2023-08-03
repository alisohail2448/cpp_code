#include <bits/stdc++.h>
using namespace std;

int search(int A[], int l, int h, int key)
{
    for (int i = 0; i < h / 2 + 1; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
        if (A[h - i] == key)
        {
            return h - i;
        }
    }
    return -1;
}
// MODIFIED BINARY SEARCH
int binarySearch(int A[], int l, int h, int key)
{
    while (l <= h)
    {
    int mid = (l + h) / 2;
        if (A[mid] == key)
        {
            return mid;
        }

        if (A[l] < A[mid])
        {
            if (key >= A[l] && key < A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        } else
        {
            if (key > A[mid] && key < A[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int key = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr, 0, n - 1, key) << endl;
    // cout<<search(arr,0,n-1,key)<<endl;

    return 0;
}