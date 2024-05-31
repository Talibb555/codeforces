#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hsh[26] = {0};
        for (int i = 0; i < 4; i++)
        {
            char c;
            cin >> c;
            hsh[c - 'a'] = 1;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (hsh[i] > 0)
                ans++;
        }
        cout << ans - 1<< endl;
    }
    return 0;
}