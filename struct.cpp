#include<iostream>
using namespace std;


struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};

 
int main(){
    struct employee ali;
    ali.eId = 1;
    ali.favChar = 'a';
    ali.salary = 120000;
    cout<<ali.salary;
    
    return 0;
}