#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me YOur age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age == 18){
        cout<<"You are kid and you will get"<<endl;

    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;

    }
    else{
        cout<<"You can come to my party"<<endl;
    }
}