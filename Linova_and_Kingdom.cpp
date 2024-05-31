#include <bits/stdc++.h>
using namespace std;

vector<int> cnt_child,parent,level,subtree;
priority_queue<pair<int,int>> pq;

void dfs(int node, int par, vector<int> adj[]){
    parent[node]=par;
    for(auto i:adj[node]){
        if(i!=par){
            cnt_child[node]++;
            level[i]=level[node]+1;
            dfs(i,node,adj);
        }
    }
    if(cnt_child[node]==0) pq.push({level[node],node});
}

int main()
{
    int n,k;cin>>n>>k;

    vector<int> adj[n];
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cnt_child.resize(n,0);
    level.resize(n,0);
    subtree.resize(n,0);
    parent.resize(n,0);
    int ans=0;
    dfs(0,-1,adj);

    while(k && !pq.empty()){
        int val=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        ans+=val;
        k--;
        subtree[node]++;
        int par_node=parent[node];
        if(par_node!=-1){
            cnt_child[par_node]--;
            subtree[par_node]+=subtree[node];
            if(cnt_child[par_node]==0) pq.push({level[par_node]-subtree[par_node],par_node});
        }

    }

    cout<<ans<<endl;

    return 0;
}