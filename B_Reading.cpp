#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(i==n-k)cout<<v[i].first<<endl;
        if(i>n-k-1) cout<<v[i].second<<" ";
    }
    
    
    return 0;
}