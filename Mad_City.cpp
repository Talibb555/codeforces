#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[], vector<int> &vis, stack<int> &cycle, int node, int par, set<int> &path){
    vis[node]=1;
    cycle.push(node);

    for(auto i:adj[node]){
        // if(i == par) continue;
        if(!vis[i]){
            if(dfs(adj,vis,cycle,i,node,path)) return true;
        }
        else if(vis[i]==1 && i!=par){
            while (!cycle.empty())
            {
                int cur=cycle.top();
                cycle.pop();
                path.insert(cur);
                if(cur==i) break;
            }
            return true;
        }
    }

    cycle.pop();
    return false;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,a,b;cin>>n>>a>>b;
        a--;b--;
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            int u,v;cin>>u>>v;
            v--;u--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n,0);
        stack<int> cycle;
        set<int> path;
        dfs(adj,vis,cycle,0,-1,path);
        // for(auto i:path) cout<<i<<endl;
        // for(auto i:vis) cout<<i<<" ";
        // cout<<endl;

        if(a==b) {cout<<"NO"<<endl;continue;}
        // if(path.count(b)) {cout<<"NO"<<endl;continue;}

        int min_dis_v=0;
        int min_dis_m=0;
        int entry_node=-1;

        // vis.resize(n,0);
        for(int i=0;i<n;i++) vis[i]=0;

        queue<int> q;
        q.push(b);
        vis[b]=1;
        // for(auto i:vis) cout<<i<<" ";
        bool f=0;
        while (!q.empty())
        {
            min_dis_v++;
            int x=q.size();
            for(int i=0;i<x;i++){
                int node=q.front();
                q.pop();
                // cout<<node<<endl;
                if(path.count(node)){entry_node=node; f=1;break;}
                for(auto j:adj[node]){
                    if(!vis[j]){
                        vis[j]=1;
                        q.push(j);
                    }
                }
            }
            if(f==1) break;
        }
        // cout<<min_dis_v<<" "<<entry_node<<endl;

        f=0;

        for(int i=0;i<n;i++) vis[i]=0;
        queue<int> qq;
        qq.push(a);
        vis[a]=1;
        while (!qq.empty())
        {
            min_dis_m++;
            int x=qq.size();
            for(int i=0;i<x;i++){
                int node=qq.front();
                qq.pop();
                if(node==entry_node){f=1;break;}
                for(auto j:adj[node]){
                    if(!vis[j]){
                        vis[j]=1;
                        qq.push(j);
                    }
                }
            }
            if(f==1) break;
        }
        // cout<<min_dis_m<<endl;
        if(min_dis_m<=min_dis_v) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    
    return 0;
}