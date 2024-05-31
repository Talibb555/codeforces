#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ans, flag = 0, i, j;
    for (i = s.length() - 1, j = t.length()-1; i >= 0, j >= 0; i--, j--)
    {
        if (s[i] != t[j])
        {
            ans = i + 1 + j + 1;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << ans << endl;
    }
    else if (i >= 0)
    {
        cout << i + 1 << endl;
    }
    else if (j >= 0)
    {
        cout << j + 1 << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}