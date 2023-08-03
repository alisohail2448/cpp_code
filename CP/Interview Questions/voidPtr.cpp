#include <iostream>

int main() {
    int number = 10;
    float decimal = 3.14;

    void* voidPtr;

    // Assigning addresses of different types to the void pointer
    voidPtr = &number;
    std::cout << "Value at voidPtr (int): " << *static_cast<int*>(voidPtr) << std::endl;

    voidPtr = &decimal;
    std::cout << "Value at voidPtr (float): " << *static_cast<float*>(voidPtr) << std::endl;

    return 0;
}
