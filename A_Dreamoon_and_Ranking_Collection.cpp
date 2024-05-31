#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int hsh[200 + 10] = {0};
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            hsh[a]++;
        }
        int ans = -1;
        for (int i = 1; i < 210; i++)
        {
            // cout<<hsh[i]<<endl;
            if (hsh[i] == 0)
            {
                x--;
            }

            if (hsh[i] == 0 && x < 0)
            {
                ans = i - 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}