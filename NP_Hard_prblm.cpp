#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[], vector<int> &vis, int node, int par){
    if(par==-1) vis[node]=1;
    else if(vis[par]==1) vis[node]=2;
    else if(vis[par]==2) vis[node]=1;
    for(auto i:adj[node]){
        if(vis[i]==0){
            if(!dfs(adj,vis,i,node)) return false;
        }
        else if(vis[i]==vis[node]) return false;
    }
    return true;
}

int main()
{
    int n,m;cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n,0);
    
    if(dfs(adj,vis,0,-1)){
        vector<int> a,b;
        for(int i=0;i<n;i++){
            if(vis[i]==1) a.push_back(i+1);
            else if(vis[i]==2) b.push_back(i+1);
        }
        cout<<a.size()<<endl;
        for(auto i:a) cout<<i<<" ";
        cout<<endl;
        cout<<b.size()<<endl;
        for(auto i:b) cout<<i<<" ";
        cout<<endl; 
    }
    else {
        cout<<-1<<endl;
    }
    // for(auto i:vis) cout<<i<<" ";
    // cout<<endl;

    return 0;
}