#include<bits/stdc++.h>
using namespace std;

void distrubutedChocolates(int arr[], int n, int m){
    sort(arr,arr+n);
    long min = 1000000000;
    for (int i = 0; i <= (n-m); i++)
    {
        if((arr[m-1+i] - arr[i])<min){
            min = arr[m-1+i] - arr[i];
        }
    }
    cout<<min;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    distrubutedChocolates(arr,n,5);
    
    return 0;
}