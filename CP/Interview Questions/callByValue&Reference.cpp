#include <iostream>

void changeValue(int num)
{
    num = 10; // Modifying the parameter
}

void changeReference(int &num)
{
    num = 10; // Modifying the parameter, which affects the original argument
}

int main()
{
    int number = 5;
    std::cout << "Before function call: Call by Value :  " << number << std::endl;
    changeValue(number); // Call by Value
    std::cout << "After function call: Call by Value :  " << number << std::endl;

    std::cout<<std::endl;
    
    std::cout << "Before function call: Call by Reference :  " << number << std::endl;
    changeReference(number); // Call by Reference
    std::cout << "After function call: Call by Reference :  " << number << std::endl;

    return 0;
}
