#include<bits/stdc++.h>
using namespace std;

int fact(int n, int m){
    int factorial = 1;

   for (int i = 2; i <= n; i++)
   {
        factorial = (1LL * factorial * i);
   }
   
   factorial = factorial % m;
    
    return factorial;
}
    
    
int main(){
    int n, m;
    cin>>n>>m;

    //  fact(n, m);
    cout<<fact(n,m)<<endl;
    return 0;
}