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
        string s;
        cin >> s;
        int odd = 0, even = 0;
        int flg = 0;
        if (n & 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                if ((s[i] - '0') & 1)
                {
                    odd++;
                    break;
                }
            }
            if (odd > 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            for (int i = 1; i < n; i += 2)
            {
                if (!((s[i] - '0') & 1))
                {
                    even++;
                    break;
                }
            }
            if (even > 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        // cout << even << " " << odd << endl;
    }

    return 0;
}