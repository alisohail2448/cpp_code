#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){                              //DEFAULT CONSTRUCTOR
        cout<<"DEFAULT CONSTRUCTOR"<<endl;
    }

    student(string n, int a, bool g){       //PARAMETERISED CONSTRUCTOR
        cout<<"PARAMETERISED CONSTRUCTOR"<<endl;
        name = n;
        age = a;
        gender = g;
    }

    student(student &a){
        cout<<"COPY CONSTRUCTOR"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"DESTRUCTOR CALLED"<<endl;
    }

    void setName(string s){                 //SETTER
        name = s;
    }

    void getName(){                         //GETTER
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"Name = ";
    //     string s;
    //     // cin>>arr[i].name;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }
    // return 0;

    student a("Ali",18,1);
    // a.printInfo();
    student b("Sohail",19,1);
    student c = a;

    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
}