#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int res=0;

int rec(vector<vector<int> >&graph, int node, string &s){
    int bal=(s[node-1]=='B') ? -1 : 1;
    for(auto child:graph[node]){
        bal+=rec(graph,child,s);
    }
    if(bal==0) res++;
    return bal;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int> > graph(n+1);
        for(int i=2;i<=n;i++){
            int x;cin>>x;
            graph[x].push_back(i);
        }
        string s;cin>>s;
        rec(graph,1,s);
        cout<<res<<endl;
        res=0;
    }   
    return 0;
}