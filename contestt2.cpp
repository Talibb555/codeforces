#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        long long sum = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        long long ans = INT_MAX;
        if (sum % 2 == 0)
        {

            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 4 == 1)
                {
                    flag = 1;
                    // cout<<1<<endl;
                    break;
                }
                if (a[i] % 2 != 0)
                    ans = min(a[i], ans);
            }
            if (flag)
            {
                cout << 1 << endl;
                // cout<<"as"<<endl;
            }
            else
            {
                long long t = ans;
                long long ct = 1;
                while (1)
                {
                    t = t / 2;
                    if (t == 1)
                    {
                        ct = ans / 4 + 1;
                        break;
                    }
                    if (t % 2 == 0)
                    {
                        break;
                    }
                    ct++;
                }
                cout << ct << endl;
            }
        }
    }

    return 0;
}