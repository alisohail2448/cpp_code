#include<bits/stdc++.h>
using namespace std;

string stringBinary(string s) {    
    int freq[2] = {0};
    for(int i = 0;i<s.length();i++){
    if(s[i] == 'z'){
        freq[0]++;
    }
     else if(s[i] == 'n'){
        freq[1]++;
     }
    }
    
    string num = "";
    for(int i = 0;i<freq[1];i++){
    num+="1";
    }
    for(int i = 0;i<freq[0];i++){
        num+="0";
    }
    
    return num;
}

int main(){
    string s;
    cin>>s;
    cout<<stringBinary(s)<<endl;
    return 0;
}