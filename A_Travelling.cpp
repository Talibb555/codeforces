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
        int a =0, b = 0, c = 0, d = 0;
        while (n--)
        {
            
            int x, y;
            cin >> x >> y;
            if (x > 0 && y == 0)
            {
                a = max(a, x);
            }
            if (x == 0 && y > 0)
            {
                b = max(b, y);
            }
            if (x < 0 && y == 0)
            {
                c = min(c, x);
            }
            if (x == 0 && y < 0)
            {
                d = min(d, y);
            }
        }

        cout << (abs(a) + abs(b) + abs(c) + abs(d)) * 2 << endl;
    }

    return 0;
}