#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int dp[1000000+10];

int rec(vector<int> &v, int ind){
    if(ind==v.size()) return 0;
    if(ind>v.size()) return 1e9;
    if(dp[ind]!=-1) return dp[ind];
    int del=1+rec(v,ind+1);
    int notDel=rec(v,ind+v[ind]+1);
    return dp[ind] = min(del,notDel);
}

int main()
{
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        memset(dp,-1,sizeof(dp));
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<rec(a,0)<<endl;
    }  
    return 0;
}