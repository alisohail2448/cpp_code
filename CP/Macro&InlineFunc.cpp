#include <iostream>

#define MY_MACRO(x, y) ((x) + (y))

inline int myInlineFunction(int x, int y) {
    return x + y;
}

int main(int argc, char* argv[]) {
    if (argc >= 3) {
        int arg1 = std::stoi(argv[1]);
        int arg2 = std::stoi(argv[2]);

        // Using the macro
        int resultMacro = MY_MACRO(arg1, arg2);
        std::cout << "Result using macro: " << resultMacro << std::endl;

        // Using the inline function
        int resultInline = myInlineFunction(arg1, arg2);
        std::cout << "Result using inline function: " << resultInline << std::endl;
    }

    return 0;
}
