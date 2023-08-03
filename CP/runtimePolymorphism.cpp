#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"This is the Base classes print function"<<endl;
        }
        void display(){
            cout<<"This is the Base classes display function"<<endl;
        }
};

class Derived: public Base{
     public:
        void print(){
            cout<<"This is the Derived classes print function"<<endl;
        }
        void display(){
            cout<<"This is the Derived classes display function"<<endl;
        }
};

int main(){

    Base *baseptr;
    Derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();

    return 0;
}