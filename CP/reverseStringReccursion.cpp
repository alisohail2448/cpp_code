#include<bits/stdc++.h>
using namespace std;

void Reverse(string s){
    if(s.length() == 0){
        return;
    }

    string ros = s.substr(1);
    Reverse(ros);
    cout<<s[0]<<endl;
}

int main(){
    
    Reverse("binod");
    return 0;
}