#include <bits/stdc++.h>
using namespace std;

void RecordBreakers()
{
    int n;
    cin >> n;
    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    a[n] = -1;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
            mx = max(mx, a[i]);
        }
    }
    cout << ans << endl;
}

int main()
{
    RecordBreakers();
    return 0;
}