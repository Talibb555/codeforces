#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     ans.push_back('0');
    // }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s.length() % 2 != 0 && i % 2 != 0)
        {
            ans.push_back(s[i]);
        }
        if (s.length() % 2 == 0 && i % 2 == 0)
        {
            ans.push_back(s[i]);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s.length() % 2 != 0 && i % 2 == 0)
        {
            ans.push_back(s[i]);
        }
        if (s.length() % 2 == 0 && i % 2 != 0)
        {
            ans.push_back(s[i]);
        }
    }

    cout << ans;

    return 0;
}