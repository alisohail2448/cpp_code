#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";

            for (int k = 1; k <= 2 * n - 2 * i; ++k)
            {
                cout << "#";
            }

            for (int l = 1; l <= i; ++l)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    }
    
}