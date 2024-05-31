#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a, b, c;
        // for (long long i = 1; i <= n; i++)
        // {
        //     if ((i + k) % 4 == 0)
        //     {
        //         a.push_back(i);
        //     }
        //     else if (i % 4 == 0)
        //     {
        //         b.push_back(i);
        //     }
        //     else
        //     {
        //         c.push_back(i);
        //     }
        // }
        for (int i = 4, j=1; i*j <= n; j++)
        {
            b.push_back(i*j);
        }
        a.push_back(k+k%4-k);
        for (int i = k+k%4,j=1,l=4; i+(j*l) <= n+k; j++)
        {
            a.push_back(i+(j*l)-k);
        }
        
        
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        // cout << endl;
        // for (int i = 0; i < c.size(); i++)
        // {
        //     cout << c[i] << " ";
        // }
        // cout << endl;
        if (a.size() == 0 || b.size() == 0 )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            long long j = 0;
            for (long long i = 0; i < a.size(); i++)
            {
                cout << a[i] << " " << a[i]-1 << endl;
                // j = i;
            }
            for (long long i = 0; i < b.size(); i++)
            {
                cout << b[i]+1 << " " << b[i] << endl;
                // j++;
            }
        }
    }

    return 0;
}