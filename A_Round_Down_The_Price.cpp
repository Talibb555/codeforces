#include <bits/stdc++.h>
using namespace std;

int count(long long n)
{
    int ct = 0;
    while (n > 0)
    {
        n /= 10;
        ct++;
    }
    return ct;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        // cout << count(n) <<endl;
        long long ans = 1;
        for (int i = 1; i < count(n); i++)
        {
            ans *= 10;
        }
        cout << n - ans << endl;
    }

    return 0;
}