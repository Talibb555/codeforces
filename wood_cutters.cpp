#include <bits/stdc++.h>
using namespace std;

map<pair<int,int> ,int > dp;

int rec(vector<pair<int,int>>& v, int ind, int lastleft){
    if(ind>=v.size()) return 0;
    if(dp.find({ind,lastleft})!=dp.end()) return dp[{ind,lastleft}];
    int fellleft=0;
    int fellright=0;
    if(ind==0 || v[ind].first-v[ind].second>lastleft){
        fellleft=1+rec(v,ind+1,v[ind].first);
    }
    if(ind==v.size()-1 || v[ind].first+v[ind].second<v[ind+1].first){
        fellright=1+rec(v,ind+1,v[ind].first+v[ind].second);
    }
    int nofell=rec(v,ind+1,lastleft);
    return dp[{ind,lastleft}] = max({fellleft,fellright,nofell});
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,h;
        cin>>x>>h;
        v.push_back({x,h});
    }
    cout<<rec(v,0,0);
    return 0;
}