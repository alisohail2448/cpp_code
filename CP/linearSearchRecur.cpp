#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int k){
    if(size == 0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }

    int remainingPart = linearSearch(arr+1, size-1, k);
    return remainingPart;
}
    
int main(){
    int arr[5] = {3,56,32,12,4};
    bool ans = linearSearch(arr, 5, 33);

    if(ans){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is not Present"<<endl;
    }
    return 0;
}