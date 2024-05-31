#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    int ans = min(v,n-1);
    int fuel = min(v,n-1);
    for (int i = 2; i < n; i++)
    {
        if (fuel >= n - 1)
            break;
        else
        {
            ans += i;
            fuel++;
        }
    }
    cout << ans;
    return 0;
}