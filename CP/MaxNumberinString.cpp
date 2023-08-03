#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "18472389234";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
}