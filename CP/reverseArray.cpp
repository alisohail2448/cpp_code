#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int s, int e){
    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

    
}

// void printArray(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    ReverseArray(arr,0,n-1);
    // printArray(arr,n);

     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}