#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    
    return -1;  
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};

    int evenIndex = binarySearch(even, 6, 5);
    cout<<"Index of 5 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 5);
    cout<<"Index of 5 is "<<oddIndex<<endl;

    return 0;
}