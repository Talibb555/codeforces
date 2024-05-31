#include <bits/stdc++.h>
using namespace std;

set<string> ans;

void solve1(string g, int ind){
    if(ind==g.size()){
        // cout<<g<<endl;
        ans.insert(g);
        return;
    }
    for (int i = ind; i < g.size(); i++)
    {
        swap(g[ind],g[i]);
        solve1(g,ind+1);
        swap(g[ind],g[i]);
    }
    
}

void solve(string s, int ind, string ds){
    if(ind==s.size()){
        // cout<<ds<<endl;
        solve1(ds,0);
        return;
    }
    ds.push_back(s[ind]);
    solve(s,ind+1,ds);
    ds.pop_back();
    solve(s,ind+1,ds);
}

int main()
{
    string s="AAB";
    string ds;
    solve(s,0,ds);
    for(auto i:ans) cout<<i<<endl;
    cout<<ans.size();
    return 0;
}