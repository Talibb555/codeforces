#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;

void solve(vector<int> &v, int ind, vector<int> &ds, int target)
{
    
    if(ind==v.size()){
        for(auto i:ds) cout<<i<<" ";
        cout<<ds.size();
        cout<<endl;
        int t=ds.size();
        ans=min(ans,t);
        return;
    }
    for (int i = 0; i < ds.size(); i++)
    {
        if(ds[i]+v[ind]<=target){
            ds[i]+=v[ind];
            solve(v,ind+1,ds,target);
            ds[i]-=v[ind];
        }
    }
    ds.push_back(v[ind]);
    solve(v,ind+1,ds,target);
    ds.pop_back();
    
}

int main()
{
    vector<int> v={1,2,3};
    int target=3;
    vector<int> ds;
    solve(v,0,ds,target);
    cout<<ans<<endl;
    return 0;
}