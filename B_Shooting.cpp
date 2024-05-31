#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i];
        s.insert({a[i] * -1, i});
    }
    int ans = 0;
    int j = 0;
    for (auto i : s)
    {

        ans += (i.first * j * (-1)) + 1;
        j++;
        // cout<<i.first<<" "<<i.second<<endl;
    }
    cout << ans << endl;
    for (auto i : s)
    {
        cout << i.second + 1 << " ";
        // cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}