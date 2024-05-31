#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> table,mx;
vector<int> lev;
vector<int> p;

void dfs(int node, int l, int par, vector<pair<int,int>> adj[]){
    lev[node]=l;
    for(auto i:adj[node]){
        if(i.first!=par){
            p[i.first]=node;
            mx[0][i.first]=i.second;
            dfs(i.first,l+1,node,adj);
        }
    }
}

void build(){
    int n=p.size();
    for(int i=0;i<n;i++){
        table[0][i]=p[i];
    }
    for(int i=1;i<=10;i++){
        for(int j=0;j<n;j++){
            table[i][j]=table[i-1][table[i-1][j]];
            mx[i][j]=max(mx[i-1][j],mx[i-1][table[i-1][j]]);
        }
    }
}

int lca(int u, int v){
    int ans=0;
    if(lev[u]>lev[v]) swap(u,v);

    int diff=lev[v]-lev[u];
    for(int i=10;i>=0;i--){
        int mask=(1<<i);
        if(mask&diff){
            ans=max(ans,mx[i][v]);
            v=table[i][v];
        }
    }

    // if(u==v) return v;
    if(u==v) return ans;

    for(int i=10;i>=0;i--){
        int up=table[i][u];
        int vp=table[i][v];
        if(up!=vp){
            ans=max(ans,mx[i][u]);
            ans=max(ans,mx[i][v]);
            u=up;
            v=vp;
            // ans=max(ans,mx[i][u]);
            // ans=max(ans,mx[i][v]);
        }
    }
    // return table[0][u];
    ans = max(ans, max(mx[0][u], mx[0][v]));
    return ans;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u-1].push_back({v-1,w});
        adj[v-1].push_back({u-1,w});
    }
    table.resize(11,vector<int>(n,0));
    mx.resize(11,vector<int>(n,0));
    p.resize(n,0);
    lev.resize(n,0);
    dfs(0,1,-1,adj);
    build();
    int q;cin>>q;
    while(q--){
        int u, v;
        cin>>u>>v;
        cout<<lca(u-1,v-1)<<endl;
    }
    // for(auto i:mx){
    //     for(auto j:i) cout<<j<<" ";
    //     cout<<endl;
    // }
    return 0;
}   