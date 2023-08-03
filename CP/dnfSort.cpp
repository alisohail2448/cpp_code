#include <bits/stdc++.h>
using namespace std;

// void swap(int A[],int B[])
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// void dnfSort(int arr[], int n)
// {
//     int low = 0;
//     int high = 0;
//     int mid = n - 1;

//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

void dnfSort(int arr[], int n)
{
    int low = 0, mid = 0, high = n-1;
    
    while(mid <= high)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
                
            case 1:
                mid++;
                break;
                
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    dnfSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}