#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    vector<long long> pf1(n, 0), pf2(n, 0);
    pf1[0] = a[0];
    pf2[0] = b[0];
    for (int i = 1; i < n; i++)
    {
        pf1[i] = a[i] + pf1[i - 1];
        pf2[i] = b[i] + pf2[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if (type == 1)
        {
            if(l==0) cout<<pf1[r]<<endl;
            else cout << pf1[r] - pf1[l - 1] << endl;
        }
        else
        {
            if(l==0) cout<<pf2[r]<<endl;
            else cout << pf2[r] - pf2[l - 1] << endl;
        }
    }

    return 0;
}