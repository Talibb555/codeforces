#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    vector<int> joy;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        if (v[i].second>k)
        {
            joy.push_back(v[i].first-(v[i].second-k));
        }
        else
        {
            joy.push_back(v[i].first);
        }
        
    }
    // for(auto i:joy){
    //     cout<<i<<" ";
    // }
    cout<<*max_element(joy.begin(),joy.end());
    
    return 0;
}