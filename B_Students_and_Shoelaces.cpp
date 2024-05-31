#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, set<int>> m2;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        m2[x].insert(y);
        m2[y].insert(x);
    }

    
    int f = 1;
    int cnt = 0;
    while (f)
    {
        set<pair<int, int>> v;
        f = 0;
        for (auto i : m2)
        {
            if (i.second.size() == 1)
            {
                v.insert({i.first, *i.second.begin()});
            }
        }
        if (v.size() > 0)
        {
            f = 1;
            cnt++;
            for (auto it : v)
            {
                m2[it.first].erase(it.second);
                m2[it.second].erase(it.first);
            }
        }
        
    }
    cout<<cnt<<endl;
    // for (auto i : m2)
    // {
    //     cout << i.first << ":" << endl;

    //     for (auto j:i.second)
    //     {
    //         cout << j << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}