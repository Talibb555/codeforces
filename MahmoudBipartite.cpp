#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

void rec(vector<vector<long long> >&v, long long node, vector<long long> &color, long long prevColor){
    if(prevColor==-1) color[node]=0;
    else color[node]=!(prevColor%2);

    for(auto i:v[node]){
        if(i!=node && color[i]==-1) rec(v,i,color,color[node]);
    }
}

int main()
{
    long long n;cin>>n;
    vector<vector<long long> > graph(n);
    for(long long i=0;i<n-1;i++){
        long long u,v;cin>>u>>v;
        u--;v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }   

    vector<long long> color(n,-1);
    rec(graph,0,color,-1);
    long long a=0,b=0;
    for(auto i:color){
        if(i==0) a++;
        else b++;
    }
    cout<<(a*b)-(n-1)<<endl;

    return 0;
}