#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int reverse_number = 0, remainder;
        cin >> n;

        while (n > 0)
        {
            remainder = n % 10;
            reverse_number = reverse_number * 10 + remainder;
            n = n / 10;
        }
        cout << reverse_number<<endl;
    }
}