#include <iostream>
#include <cstring>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    // Copy the contents of the source array to the destination array
    memcpy(destination, source, sizeof(source));

    // Print the contents of the destination array
    for (int i = 0; i < 5; ++i) {
        std::cout << destination[i] << " ";
    }

    return 0;
}
