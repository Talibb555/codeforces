#include <bits/stdc++.h>
using namespace std;

int hsh[1000 * 1000] = {0};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ct = 0;
        for (int i = n - 1; i >= 0; i--)
        {

            if (hsh[a[i]] == 0)
                ct++;
            else
                break;
            hsh[a[i]] = 1;
        }
        cout << n - ct << endl;
        // hsh[1000*1000]={0};
        for (int i = 0; i < n; i++)
        {
            hsh[a[i]] = 0;
        }
    }

    return 0;
}