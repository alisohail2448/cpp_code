#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char A[100];
    cin>>A;

    bool check = true;
    
    for (int i = 0; i < n; i++)
    {
        if(A[i] != A[n-1-i]){
            check = false;
            break;
        }
    }

    if(check){
        cout<<"Word is Pallindrome";
    }
    else{
        cout<<"Word is not Pallindrome";
    }
    
}