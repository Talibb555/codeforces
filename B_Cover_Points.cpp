#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        s.insert({x, y});
    }
    // auto it=--s.end();
    // cout<<*--s.end();
    int ans=-1;
    for (auto i : s)
    {
        // cout<<i.first<<" "<<i.second<<endl;
        ans = max((i.first + i.second),ans);
    }
    cout << ans << endl;

    return 0;
}