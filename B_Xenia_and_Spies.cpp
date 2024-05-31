#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    int j = 1;
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < m; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;
        v.push_back({t, {l, r}});
    }
    int k = 0;
    while (1)
    {
        if (s < f && s!=f)
        {
            if (j == v[k].first)
            {
                if (s >= v[k].second.first && s <= v[k].second.second || s + 1 >= v[k].second.first && s + 1 <= v[k].second.second)
                {
                    cout << "X";
                }
                else
                {
                    s++;
                    cout << "R";
                }
                k++;
            }
            else
            {
                s++;
                cout << "R";
            }
            if (s == f)
            break;
        }
        if (s > f && s!=f)
        {
            if (j == v[k].first)
            {
                if (s >= v[k].second.first && s <= v[k].second.second || s- 1 >= v[k].second.first && s- 1 <= v[k].second.second)
                {
                    cout << "X";
                }
                else
                {
                    s--;
                    cout << "L";
                }
                k++;
            }
            else
            {
                s--;
                cout << "L";
            }
            if (s == f)
            break;
        }
        j++;
        
    }

    return 0;
}