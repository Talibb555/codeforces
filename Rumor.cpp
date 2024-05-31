#include <bits/stdc++.h>
using namespace std;

long long mn=INT_MAX;

void dfs(vector<int> adj[], vector<int>& vis, long long c[], int n, int node){
    vis[node]=1;
    mn=min(mn,c[node]);
    for(auto i:adj[node]){
        if(!vis[i]) dfs(adj,vis,c,n,i);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    long long c[n];
    for(int i=0;i<n;i++) cin>>c[i];
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n,0);
    long long ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(adj,vis,c,n,i);
            ans+=mn;
            mn=INT_MAX;
        }
    }
    cout<<ans<<endl;

    return 0;
}