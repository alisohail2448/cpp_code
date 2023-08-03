#include<bits/stdc++.h>
using namespace std;
    

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
};

    
int main(){
    int arr[5] = {5, 3, 8, 4, 2};
     selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout<<arr[i]<<" ";
    return 0;
}