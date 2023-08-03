#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int orginaln = n;

    while (n > 0)
    {
        int lastDigit = n%10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if (sum == orginaln)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
}