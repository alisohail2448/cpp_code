#include<bits/stdc++.h>
using namespace std;

int Sum(int n){
   int ans = 0;
   for (int i = 0; i <= n; i++)
   {
      ans += i;
   }
   return ans;
}

int SumRec(int n){
   return (n*(n+1)/2);
}

int main(){
    int n;
    cin >> n;

   //  for (int i = 1; i <= n; i++)
   //  {
   //     for (int j = 1; j <= i; j++)
   //     {
   //        cout<<i<<" ";
   //     }
   //     cout<<endl;
       
   //  }
   cout<<SumRec(n)<<endl;
   cout<<Sum(n)<<endl;
    
}