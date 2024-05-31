#include <bits/stdc++.h>
using namespace std;

int sumdigit9(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    long long n; cin >> n;
    long long ans = 1e18;
    for (int i = 1; i <= 90; i++)
    {
        long long val1 = sqrt(i * i + 4 * n);
        if (val1 * val1 == i * i + 4 * n)
        {
            long long val2 = -i + val1;
            if (val2 % 2 == 0 && sumdigit9(val2/2)==i) ans = min(ans, val2 / 2); 
        }
    }
    if (ans == 1e18) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}