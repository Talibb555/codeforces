#include <bits/stdc++.h>
using namespace std;
#define int long long
int sumdig(int s)
{
    int val = s, sum = 0;
    while (val > 0)
    {
        sum += val % 10;
        val /= 10;
    }
    return sum;
}

signed main()
{
    int n;
    cin >> n;
    int ans = 1e18;
    for (int i = 1; i <= 182; i++)
    {
        int val = sqrt(i * i + 4 * n);
        if (val * val == i * i + 4 * n)
        {
            // cout<<1<<endl;
            int val2 = val - i;
            if ((val2) % 2 == 0)
            {
                if (sumdig(val2 / 2) == i)
                {
                    ans = min(ans, val2 / 2);
                }
            
            }
        }
    }
    if(ans==1e18)
    cout<<-1<<endl;
    else
    cout << ans << endl;
}