#include<iostream>
using namespace std;

int c = 45;

int main(){
    int a, b, c;
    cout<<"Enter the Value of a :"<<endl;
    cin>>a;

    cout<<"Enter the Value of b :"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The Sum is :"<<c<<endl;
    cout<<"The Global Variable c is:"<<::c;
    

    return 0;

}