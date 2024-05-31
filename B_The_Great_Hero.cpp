#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, n;
        cin >> A >> B >> n;
        // int a[n], b[n];
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (B <= 0) ok = false;
            int k1 = B / v[i].first;
            int k2 = B % v[i].first;
            int k3 = v[i].second / A;
            int k4 = v[i].second % A;
            if (k2) k1++;
            if (k4) k3++;
            int x = min(k1, k3);
            B -= x * v[i].first;
            v[i].second -= x * A;
        }
        if (v[n - 1].second > 0)
        {
            ok = false;
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}