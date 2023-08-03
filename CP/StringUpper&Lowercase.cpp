#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "agksdjflksnfvvlk";
    //UpperCase
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    //LowerCase

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] >='A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    cout<<str<<endl;

    string s = "alksjasdlkksdl";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    
    return 0;
}