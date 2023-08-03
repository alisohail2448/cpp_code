#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 3, b = 54, c = 344;
    cout<<"The Value of a without setw is : "<<a<<endl;
    cout<<"The Value of b without setw is : "<<b<<endl;
    cout<<"The Value of c without setw is : "<<c<<endl;
   
    cout<<"The Value of a is : "<<setw(4)<<a<<endl;
    cout<<"The Value of b is : "<<setw(4)<<b<<endl;
    cout<<"The Value of c is : "<<setw(4)<<c<<endl;
   
}