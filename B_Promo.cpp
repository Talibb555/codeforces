#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    long long p[n + 2] = {0}; // Prefix Sum
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + a[i - 1];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << p[x] - p[x - y] << endl;
    }

    return 0;
}