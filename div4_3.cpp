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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            int u = 0, d = 0;
            for (int i = 0; i < x; i++)
            {
                if (s[i] == 'U')
                {
                    u++;
                }
                if (s[i] == 'D')
                {
                    d++;
                }
            }
            int sum = abs(u - d);
            if (u > d)
            {
                a[i] = a[i] - sum;
            }
            else
            {
                a[i] += sum;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                cout << a[i] + 10 << " ";
            }
            else
                cout << a[i] % 10 << " ";
        }
        cout << endl;
    }

    return 0;
}