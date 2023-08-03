#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 34, 54, 34, 23, 34};
    int i = 0;
    while (i < 6)
    {
        cout << "The Value of Marks " << i << " is " << marks[i] << endl;
        i++;
    }
    return 0;
}