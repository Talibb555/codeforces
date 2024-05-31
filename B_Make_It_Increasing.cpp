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
        long long a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] == 0)
            {
                ok = false;
                break;
            }

            while (a[i] >= a[i + 1])
            {
                count++;
                a[i] /= 2;
            }
        }
        if (ok)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}