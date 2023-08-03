#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout<<"The Sum of 1, 2  is "<<sum(1,2)<<endl;
    cout<<"The Sum of 1, 2 & 3 is "<<sum(1,2,3)<<endl;
    return 0;
}