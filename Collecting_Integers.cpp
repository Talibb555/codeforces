#include <bits/stdc++.h>
using namespace std;

long long lowerBound(long long lo, long long hi, vector<pair<long long, long long> > &v, long long target)
{
    long long ans = -1;
    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if (v[mid].first <= target)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // cout<<1<<endl;
        vector<pair<long long, long long> > a(n);
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            // a[i] = {x, i};
            a[i]=make_pair(x,i);
        }

        sort(a.begin(), a.end());

        vector<long long> pf(n, 0);
        pf[0] = a[0].first;

        for (long long i = 1; i < n; i++)
            pf[i] = pf[i - 1] + a[i].first;

        // for(auto i:pf) cout<<i<<" ";
        // cout<<endl;

        vector<long long> ans(n);
        // ans[n - 1] = n - 1;

        for (long long i = n - 1; i >= 0; i--)
        {
            long long ind = lowerBound(i + 1, n - 1, a, pf[i]);
            // cout<<"ind: "<<ind<<" ";
            if (ind != -1)
            {
                ans[a[i].second] = ans[a[ind].second];
                // cout<<"ind: "<<a[ind].first<<" ";
            }
            else
                ans[a[i].second] = i;
        }

        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}