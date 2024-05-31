#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        while (n)
        {
            if (n % k == 0)
            {
                ans++;
                n = n / k;
            }
            else
            {
                long long x=n%k;
                n-=x;
                ans+=x;
            }
        }
        cout << ans << endl;
    }

    return 0;
}