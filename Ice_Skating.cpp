#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<int> &vis, int node){
    vis[node]=1;
    for(auto i:adj[node]){
        if(!vis[i]) dfs(adj,vis,i); 
    }
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    vector<int> adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i].first==v[j].first || v[i].second==v[j].second){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<int> vis(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]) {dfs(adj,vis,i);ans++;}
    }
    cout<<ans-1<<endl;

    return 0;
}