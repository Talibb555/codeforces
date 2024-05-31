#include <bits/stdc++.h>
using namespace std;

bool balanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char op = s[0];
        char en = s[s.length() - 1];
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == op)
            {
                s[i] = '(';
            }
            if (s[i] == en)
            {
                s[i] = ')';
            }
        }
        string s1 = s;
        string s2 = s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s1[i] != '(' && s1[i] != ')')
            {
                s1[i] = ')';
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s2[i] != '(' && s2[i] != ')')
            {
                s2[i] = '(';
            }
        }
        if (balanced(s1) || balanced(s2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}