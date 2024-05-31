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
        map<int, int> m;
        int mx = 0, operations = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            mx = max(mx, m[x]);
        }
        n -= mx;
        operations += n;
        while (n > 0)
        {
            operations++;
            n -= mx;
            mx = mx * 2;
        }
        cout << operations << endl;
    }

    return 0;
}