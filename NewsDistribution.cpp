#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int siz = 0;

void dfs(vector<vector<int> >&graph, int node, vector<int> &vis, vector<int> &v){
    vis[node]=1;
    v.push_back(node);
    siz++;
    for(auto i:graph[node]){
        if(!vis[i]) dfs(graph,i,vis,v);
    }
}

int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int> > graph(n+1);
    while(m--){
        int k;cin>>k;
        if(k==0) continue;
        int x;cin>>x;
        for(int i=0;i<k-1;i++){
            int y;cin>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
            x=y;
        }
    }   
    vector<int> vis(n+1,0), v, ans(n+1);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(graph,i,vis,v);
        }
        // cout<<siz<<endl;
        for(auto i:v){
            ans[i]=siz;
            // cout<<i<<" ";
        }
        // cout<<endl;
        v.clear();
        siz=0;
    }
    for(auto it = ans.begin() + 1; it != ans.end(); ++it) cout << *it << " ";


    cout<<endl;
    // for(auto i:graph){
    //     for(auto j:i) cout<<j<<" ";
    //     cout<<endl;
    // }
    return 0;
}