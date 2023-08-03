#include<bits/stdc++.h>
using namespace std;


///  MY FIRST INTERVIEW QUESTION IN JAVASCRIPT


void largestElement(int arr[], int n){
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<largest<<endl;
}

void secondLargest(int arr[], int n){
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && first != second)
        {
            second = arr[i];
        }
    }
    cout<<second<<endl;
    
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,10};
    // largestElement(arr, n);
    secondLargest(arr, n);

    return 0;
}