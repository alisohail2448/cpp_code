#include<bits/stdc++.h>
using namespace std;


int getPivot(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

    
int main(){
    int arr[6] = {1,7,3,6,5,6};
    cout<<"Pivot index is "<<getPivot(arr, 6)<<endl;
    return 0;
}