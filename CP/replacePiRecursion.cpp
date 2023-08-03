#include<bits/stdc++.h>
using namespace std;

void replacePi(string s){
    if(s.length() == 0){
        return;
    }

    if(s[0] == s[1]){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

int main(){

    replacePi("pipippppppppipppi");
    return 0;
}