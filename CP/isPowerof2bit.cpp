#include <iostream>
using namespace std;

bool isPowerof2(int n) {
    return (n && !(n & n-1));
}

int main() {
    if(isPowerof2(8))
        cout << "It's a power of 2" << endl;
    else
        cout << "It's not a power of 2" << endl;
    
    return 0;
}
