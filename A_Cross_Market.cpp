#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        if (n == 1 && m == 1)
            cout << 0 << endl;
        // else if ((n == 2 && m != 2 )|| (n != 2 && m == 2 ))
        //     cout << max(n, m) + 2 * (min(n, m) / 2) << endl;
        // else
        // {
        //     if (n % 2 == 0 && m % 2 == 0)
        //     {
        //         cout << max(n, m) + 2 * (min(n, m) / 2) - 1 + 2 * (min(n, m) / 2) - 1 << endl;
        //     }
        //     else
        //     {
        //         cout << max(n, m) + 2 * (min(n, m) / 2) + 2 * (min(n, m) / 2) << endl;
        //     }
        // }
        else
        {
            int mx = max(n, m);
            int mn = min(n, m);
            cout << n + m - 1 + min(n, m) - 1 << endl;
        }
    }

    return 0;
}