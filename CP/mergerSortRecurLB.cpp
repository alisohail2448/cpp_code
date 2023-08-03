#include <bits/stdc++.h>
using namespace std;

// void merge(int *arr, int s, int e){

//         int mid = (s + e)/2;
//         int len1 = mid - s + 1; //length of first half
//         int len2 = e - mid; //length of second half
//         int *arr1 = new int[len1];
//         int *arr2 = new int[len2];

//         //copy elements in these arrays;
//         int originalArrayIndex = s;
//         for(int i = 0; i < len1; i++){
//             arr1[i] = arr[originalArrayIndex++];
//         }

//         //originalArrayIndex = mid + 1;
//         for(int i = 0; i < len2; i++){
//             arr2[i] = arr[originalArrayIndex++];
//         }

//         //merge two sorted arrays;
//         originalArrayIndex = s;

//         int idx1 = 0;
//         int idx2 = 0;
//         while(idx1 < len1 && idx2 < len2){
//             if(arr1[idx1] < arr2[idx2]){
//                 arr[originalArrayIndex++] = arr1[idx1++];
//             }
//             else {
//                 arr[originalArrayIndex++] = arr2[idx2++];
//             }
//         }

//         //if in arr1 elements are remaining
//         while(idx1 < len1){
//             arr[originalArrayIndex++] = arr1[idx1++];
//         }
//         //if in arr2 elements are remaining
//         while(idx2 < len2){
//             arr[originalArrayIndex++] = arr2[idx2++];
//         }
//     }

void merge(int *arr, int s, int e)
{
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int originalArrayIndex = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[originalArrayIndex++];

    originalArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = arr[originalArrayIndex++];

    int index1 = 0;
    int index2 = 0;
    originalArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[originalArrayIndex++] = first[index1++];
        else
            arr[originalArrayIndex++] = second[index2++];
    }

    while (index1 < len1)
        arr[originalArrayIndex] = first[index1++];

    while (index1 < len2)
        arr[originalArrayIndex] = second[index2++];
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e-s)/2;

    // left Part
    mergeSort(arr, s, mid);
    // right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[10] = {3, 4, 11, 5, 6, 8, 9, 23, 98, 42};
    int n = 10;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
