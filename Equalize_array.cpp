#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            mx = max(mx, m[x]);
        }
        vector<int> v;
        for (auto i : m)
        {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        int ans = n-m.size(); // Include the <climits> header to use INT_MAX
        for (int i = 1; i <= mx; i++)
        {
            int ind = lower_bound(v.begin(), v.end(), i) - v.begin();
            int x=v.size();
            ans = min(ans, (n - ((x - ind) * i)));
        }
        cout << ans << endl;
    }

    return 0;
}
