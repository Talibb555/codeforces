#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == s[s.length() - 1])
        {
            cout << s << endl;
        }
        else
        {
            s[s.length() - 1] = s[0];
            cout << s << endl;
        }
    }

    return 0;
}