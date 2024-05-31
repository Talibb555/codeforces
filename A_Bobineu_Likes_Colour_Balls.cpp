#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d)
{
    return a % 2 + b % 2 + c % 2 + d % 2 <= 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, b, g, w;
        cin >> r >> b >> g >> w;
        if (check(r, b, g, w))
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            if (check(r - 1, b - 1, g - 1, w + 3) && r > 0 && b > 0 && g > 0)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }

    return 0;
}