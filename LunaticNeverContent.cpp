#include <bits/stdc++.h>
#include<math.h>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n; ++i) ans = gcd(ans, abs(a[i] - a[n - i - 1]));
        
        cout << ans << '\n';
    }

    return 0;
}