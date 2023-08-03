// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int pivot = arr[s];
//     int count = 0;

//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//             count++;
//     }

//     int pivotIndex = s + count;
//     swap(arr[pivotIndex], arr[s]);

//     int i = s, j = e;

//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] <= pivot)
//             i++;

//         while (arr[j] > pivot)
//             j--;

//         if (i < pivotIndex && j > pivotIndex)
//             swap(arr[i++], arr[j--]);
//     }
//     return pivotIndex;
// }


// void solve(int arr[], int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int p = partition(arr, s, e);
//     solve(arr, s, p - 1);
//     solve(arr, p + 1, e);
// }

// int main()
// {
//     int arr[5] = {2, 4, 5, 3, 1};
//     int n = 5;
//     solve(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] < pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] >= pivot) j--;

        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    if(s >= e)
        return;
    
    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

    
int main(){
    int n = 5;
    int arr[5] = {3, 4, 2, 5, 1};

    quickSort(arr, 0, n-1);

    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}