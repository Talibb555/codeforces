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
        int k = 0;
        int a[n], b[n], d1[n], d2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (b[k] >= a[i])
                d1[i] = abs(a[i] - b[k]);
            else
            {
                while (b[k] < a[i])
                {
                    k++;
                }

                d1[i] = abs(a[i] - b[k]);
            }
            // k=0;
        }
        for (int i = 0; i < n; i++)
        {
            cout << d1[i] << " ";
        }
        cout << endl;
        int l=n-1;
        for (int i = 0; i < n; i++)
        {
            if (b[l] >= a[i])
                d2[i] = abs(a[i] - b[l]);
            else
            {
                while (b[k] < a[i])
                {
                    l--;
                }

                d2[i] = abs(a[i] - b[l]);
            }
            // k=0;
        }
        for (int i = 0; i < n; i++)
        {
            cout << d2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}