#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

void dfs(vector<vector<int> >&graph, int node, int par, int steps, int index, map<pair<int,int>,int> &m, int &ans){
    ans=max(ans,steps);
    for(auto child:graph[node]){
        if(child!=par){
            int curIndex=m[make_pair(node,child)];
            if(curIndex>index) dfs(graph,child,node,steps,curIndex,m,ans);
            else dfs(graph,child,node,steps+1,curIndex,m,ans);
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int> > graph(n);
        map<pair<int,int>,int> m;
        for(int i=0;i<n-1;i++){
            int u,v;cin>>u>>v;
            u--;v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
            m[make_pair(u,v)]=i+1;
            m[make_pair(v,u)]=i+1;
        }
        int ans=0;
        dfs(graph,0,-1,0,n,m,ans);
        cout<<ans<<endl;
    }
    return 0;
}