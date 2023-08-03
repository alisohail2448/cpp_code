#include <iostream>

int main() {
    int variable1;
    int variable2;

    if (&variable1 < &variable2) {
        std::cout << "Stack grows upwards." << std::endl;
    } else {
        std::cout << "Stack grows downwards." << std::endl;
    }

    return 0;
}
