#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = 0;
        if (a > b && a % b == 0 && !(a & 1))
        {
            long long x = a / b;
            while (x % 8 == 0 && x != 1)
            {
                x /= 8;
                ans++;
            }
            while (x % 4 == 0 && x != 1)
            {
                x /= 4;
                ans++;
            }
            while (x % 2 == 0 && x != 1)
            {
                x /= 2;
                ans++;
            }
            if ((x & 1) && x!=1)
                ans = -1;
            cout << ans << endl;
        }
        else if (a < b && b % a == 0 && !(b & 1))
        {
            long long x = b / a;
            while (x % 8 == 0 && x != 1)
            {
                x /= 8;
                ans++;
            }
            while (x % 4 == 0 && x != 1)
            {
                x /= 4;
                ans++;
            }
            while (x % 2 == 0 && x != 1)
            {
                x /= 2;
                ans++;
            }
            if ((x & 1) && x!=1)
                ans = -1;

            cout << ans << endl;
        }
        else if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}