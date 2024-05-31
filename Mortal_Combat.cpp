#include <bits/stdc++.h>
using namespace std;

int dp[200000+4][2];

int rec(int ind, int turn, vector<int>&v){
    if(ind==v.size()) return 0;
    if(ind>v.size()) return INT_MAX;
    if(dp[ind][turn]!=-1) return dp[ind][turn];
    if(turn){
        int take1=INT_MAX, take2=INT_MAX;
        take1=rec(ind+1,0,v);
        take2=rec(ind+2,0,v);
        return dp[ind][turn]= min(take1,take2);
    }
    else{
        int take1=INT_MAX, take2=INT_MAX;
        take1=(v[ind]==1)+rec(ind+1,1,v);
        if(ind+1<v.size()) take2=(v[ind]==1)+(v[ind+1]==1)+rec(ind+2,1,v);
        return dp[ind][turn] = min(take1,take2);
    }
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        memset(dp,-1,sizeof(dp));
        cout<<rec(0,0,a)<<endl;
    }
    
    return 0;
}