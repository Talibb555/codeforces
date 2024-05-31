#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        ans += (n / k) * k;
        if (n - ans <= k / 2)
        {
            cout << n << endl;
        }
        else
        {
            ans += k / 2;
            cout << ans << endl;
        }
    }

    return 0;
}