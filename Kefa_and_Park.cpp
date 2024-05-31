#include <bits/stdc++.h>
using namespace std;
int ans=0;
void dfs(int node, vector<int> adj[], vector<int>& cat,vector<int>& vis, int cons, int m){
    vis[node]=1;
    if(cat[node]==1) cons++;
    else cons=0;
    if(cons>m) return ;
    if(node!=0 and adj[node].size()==1) ans++; 
    for(auto i:adj[node]){
        if(!vis[i]){
            dfs(i,adj,cat,vis,cons,m);
        }
    }
    cons=0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    vector<int> cat(n);
    for(int i=0;i<n;i++) cin>>cat[i];
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(auto i:adj){
    //     for(auto j:i) cout<<j<<" ";
    //     cout<<endl;
    // }
    vector<int> vis(n,0);
    dfs(0,adj,cat,vis,0,m);
    cout<<ans;
    return 0;
}