#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int hsh[26] = {0};
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        hsh[s[i] - 'a']++;
        ct = max(ct, hsh[s[i] - 'a']);
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hsh[i] % n == 0 || hsh[i] == 0)
            continue;
        else
        {
            flag = 1;
            cout << -1 << endl;
            break;
        }
    }
    if (flag == 0)
    {
        string s = "";

        for (int i = 0; i < 26; i++)
        {
            if (hsh[i])
            {
                for (int j = 1; j <= (hsh[i] / n); j++)
                {
                    s += 'a' + i;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}