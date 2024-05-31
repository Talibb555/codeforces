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
        int a[n];
        int b[k];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i<k) b[i]=a[i];
        }
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if(b[i]<=k) ans++;
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] != i + 1)
        //     {
        //         for (int j = 0; j < n; j++)
        //         {
        //             if (j != i && a[j] == i + 1 && (i+1)<=k)
        //             {
        //                 swap(a[i], a[j]);
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        cout << k-ans <<endl;
    }

    return 0;
}