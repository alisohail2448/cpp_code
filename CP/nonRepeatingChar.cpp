#include<bits/stdc++.h>
using namespace std;

char nonRepeatingCharacter(string S)
    {
       //Your code here
       map<char, int>m;
       for(int i = 0;i<S.length();i++){
           m[S[i]]++;
       }
       for(int i = 0;i<S.length();i++){
           if(m[S[i]] < 2){
               return S[i];
           }
       }
       
       return '$';
       
    }

int main(){
    string S= "hello";
    cout<<nonRepeatingCharacter(S)<<endl;
    return 0;
}