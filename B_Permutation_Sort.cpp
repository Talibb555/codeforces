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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v = a;
        sort(v.begin(), v.end());
        if (a == v)
        {
            cout << 0 << endl;
        }
        else if (a[0] == v[n - 1] && a[n - 1] == v[0])
        {
            cout << 3 << endl;
        }
        else if (a[0] == v[0] || a[n - 1] == v[n - 1])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        // int ans=0;
        // while (a!=v)
        // {
        //     if (a[0]==v[0])
        //     {
        //         sort(a.begin()+1,a.end());
        //     }
        //     else
        //     {
        //         sort(a.begin(),a.end()-1);
        //     }
        //     ans++;
        // }
        // cout<<ans<<endl;
    }

    return 0;
}