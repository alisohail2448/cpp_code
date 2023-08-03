#include <bits/stdc++.h>
using namespace std;

bool isPar(string s)
{
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) return false;
            else if ((s[i] == ')' && st.top() == '(') || s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() == '[')
                st.pop();
            else
            {
                return false;
            }
        }
    }
    if (st.empty()) return true;
}

int main()
{
    string s = "()";
    if (isPar(s))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }
    return 0;
}