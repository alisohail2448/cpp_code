#include<bits/stdc++.h>
using namespace std;
    
    
int main(){
    string s = "abbaca";
    string ans = "";
        for(int i = 0; i<s.length(); i++){
            if(ans.size() != 0 && ans.back() == s[i]){
                cout<<"True "<<s[i]<<endl;
                ans.pop_back();
            }
            else{
                cout<<"False "<<s[i]<<endl;
                ans.push_back(s[i]);
            }
        }

    // cout<<ans<<endl;

    return 0;
}