#include<bits/stdc++.h>
using namespace std;

 string reverseWords(string S) 
    { 
        // code here 
         stack<string> stk;
         string s = "";
         
       for(int i = 0;i<S.length();i++){
           if(S[i] != '.'){
               s+=S[i];
           }
           else if(S[i] == '.'){
               stk.push(s);
               s = "";
           }
       }
       stk.push(s);
       string res = "";
       while(!stk.empty()){
           string str = stk.top();
           stk.pop();
           res += str+".";
           
       }
       res.pop_back();
       return res;
    }

int main(){
    string S = "i.like.this.program.very.much";
    string ans = reverseWords(S);
    cout<<ans<<endl;
    return 0;
}