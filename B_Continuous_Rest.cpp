#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[2 * n];
    int ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 2 * n; i++)
    {
        b[i] = a[i % n];
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (b[i] == 1)
        {
            sum++;
            ans = max(sum, ans);
        }
        else
        {
            sum = 0;
        }
    }
    cout << ans << endl;

    return 0;
}