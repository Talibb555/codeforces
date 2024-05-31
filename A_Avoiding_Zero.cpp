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
        int sum = 0, pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] < -0)
                neg += a[i]*-1;
            else
                pos += a[i];
        }

        if (sum)
        {
            cout << "YES" << endl;
            sort(a, a + n);
            if (pos > neg)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}