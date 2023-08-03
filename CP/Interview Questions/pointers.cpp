#include <iostream>

int main() {
    int number = 42;   // Declare an integer variable
    int* pointer;      // Declare a pointer variable

    pointer = &number; // Assign the address of 'number' to 'pointer'

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value stored in pointer: " << *pointer << std::endl;
    std::cout << "Address stored in pointer: " << pointer << std::endl;

    return 0;
}
