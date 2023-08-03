#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int start, int end){
    if(start >= end) return ;

    int minIndex = start;
    for (int i = start; i <= end; i++)
    {
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[start]);
    selectionSort(arr, start+1, end);
}

int main(){
    int arr[5] = {5, 3, 8, 4, 2};
     selectionSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}