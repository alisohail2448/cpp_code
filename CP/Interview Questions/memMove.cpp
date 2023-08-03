#include <iostream>
#include <cstring>

int main() {
    int data[] = {1, 2, 3, 4, 5};

    // Shift the array elements to the right by 2 positions
    memmove(data + 2, data, sizeof(int) * 3);

    // Print the modified array
    for (int i = 0; i < 5; ++i) {
        std::cout << data[i] << " ";
    }

    return 0;
}
