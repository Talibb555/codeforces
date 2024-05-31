#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string g = "hello";
    int j = 0, len = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == g[j])
        {
            j++;
            len++;
        }
        if (len == 5)
        {
            break;
        }
    }
    if (len == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}