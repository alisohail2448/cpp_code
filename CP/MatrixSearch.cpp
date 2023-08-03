#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;

    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
        }
        
    }

    bool found = false;
    int r=0, c = m-1;

    while (r>n && c>=0){}
    {
        if(A[r][c] == target){
            found = true;
        }
        if(A[r][c] > target){
            c--;
        }
        else{
            r++;
        }   
    }
    if(found){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    
}