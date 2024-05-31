#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    map<long long, vector<long long>> m;
    vector<pair<long long, long long>> v;
    set<long long> st;
    int flag = 0;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        m[a[i]].push_back(i);
    }
    for (auto i : m)
    {
        // cout << i.first << " ";
        // for (int j = 0; j < i.second.size(); j++)
        // {
        //     cout<<i.second[j]<<" ";
        // }
        // cout<<endl;
        st.clear();
        if (i.second.size() > 2)
        {
            int diff = i.second[1] - i.second[0];
            for (int j = 0; j < i.second.size() - 1; j++)
            {
                // if (diff == i.second[j + 1] - i.second[j])
                //     continue;
                // else
                // {
                //     flag = 1;
                //     break;
                // }
                st.insert(i.second[j+1]-i.second[j]);
            }
            if (st.size()== 1)
            {
                // cout << diff << endl;
                v.push_back({i.first, diff});
            }
        }
        else if(i.second.size()==2){
            v.push_back({i.first, i.second[1] - i.second[0]});
        }
        else
        {
            // cout << 0 << endl;
            v.push_back({i.first, 0});
        }
    }
    
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}