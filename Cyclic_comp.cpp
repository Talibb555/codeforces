#include <bits/stdc++.h>
using namespace std;

vector<int> comp;

void dfs(vector<int> adj[], vector<int> &vis, int node){
    vis[node]=1;
    comp.push_back(node);
    for(auto i:adj[node]){
        if(vis[i]==0) dfs(adj,vis,i);
    }
}

int main()
{
    int n,m;cin>>n>>m;
    vector<int> adj[n];
    vector<int> deg(n,0);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    vector<int> vis(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(adj,vis,i);
            bool f=0;
            for(auto j:comp){
                if(deg[j]!=2) f=1;
            }
            comp.clear();
            if(f==0) ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}