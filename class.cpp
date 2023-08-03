#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;
        cout<<"Value of e is "<<e<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee sam;
    sam.d = 34;
    sam.e = 45;
    sam.setData(1,2,4);
    sam.getData();

    return 0;
}