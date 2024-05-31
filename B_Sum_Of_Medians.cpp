#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n * k];
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        long long sum = 0;
        if (n & 1)
        {
            int m = n / 2 + 1;
            int y = n * k;
            while (k)
            {
                sum = sum + a[y - m];
                y = y - m;
                k--;
            }
        }
        else
        {
            int m = n / 2;
            int y = n * k;
            while (k)
            {
                sum = sum + a[y - m - 1];
                y = y - m - 1;
                k--;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}