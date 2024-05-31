#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n+1,0);
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    vis[1]=1;
    vector<int> ans;
    while (!pq.empty())
    {
        int node=pq.top();
        pq.pop();
        ans.push_back(node);
        for(auto i:adj[node]){
            if(!vis[i]){
                pq.push(i);
                vis[i]=1;
            }
        }
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    
    return 0;
}