#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a;
    cin >> b;

    int size_a = a.size();
    int size_b = b.size();

    string concat = a + b;
    cout<<size_a<<" "<<size_b<<endl;
    cout<<concat<<endl;
    // cout<<b<<" "<<a<<endl;

    if(size_a > 0 && size_b > 0){
        swap(a[0],b[0]);
        cout<<a<<" "<<b<<endl;
    }



}