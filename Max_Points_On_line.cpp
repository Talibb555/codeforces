#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{1, 1}, {3, 2}, {5, 3}, {4, 1}, {2, 3}, {1, 4}};
    map<pair<int, int>, int> m;
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int mx = INT_MIN ,infi = 0;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j].first == v[i].first)
                infi++;
            else
            {
                int y1 = v[j].second - v[i].second;
                int x1 = v[j].first - v[i].first;
                int gcd = __gcd(y1, x1);
                y1 /= gcd;
                x1 /= gcd;
                m[{y1, x1}]++;
                mx = max(mx,m[{y1, x1}]);
            }
            mx=max(mx,infi);
        }
        // for (auto i : m)
        // {
        //     cout << i.first.first << " " << i.first.second << " " << i.second << endl;
        // }
        // cout<<mx<<endl;
        // cout << endl;
        ans = max(ans, mx + 1);  // swayam hi tu pt hai
        m.clear();
    }
    cout << ans << endl;
    // for (auto i : m)
    // {
    //     cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    // }

    return 0;
}