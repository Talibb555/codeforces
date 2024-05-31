#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<int> &vis, int node, int &vrtces, int &e){
    vis[node]=1;
    vrtces++;
    e+=adj[node].size();
    for(auto i:adj[node]){
        if(!vis[i]) dfs(adj,vis,i,vrtces,e);
    }
}

int main()
{
    int n,m;cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int vrtces=0,e=0;
            dfs(adj,vis,i,vrtces,e);
            if(vrtces*1LL*(vrtces-1)!=e) {cout<<"NO"<<endl;return 0;}
        }
    }
    cout<<"YES"<<endl;

    return 0;
}