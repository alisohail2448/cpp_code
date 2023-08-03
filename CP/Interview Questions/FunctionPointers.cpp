#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
int divide(int a, int b) {
    return a / b;
}

int main() {
    // Declare a function pointer
    int (*operation)(int, int);

    // Assign the function pointer to the desired function
    operation = add;

    // Use the function pointer to call the selected function
    int result = operation(4, 2);
    std::cout << "Addition Result: " << result << std::endl;

    // Assign the function pointer to a different function
    operation = subtract;

    // Use the function pointer to call the selected function
    result = operation(4, 2);
    std::cout << "Subtraction Result: " << result << std::endl;

    return 0;
}
