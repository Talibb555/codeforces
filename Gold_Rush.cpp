#include <bits/stdc++.h>
using namespace std;

bool rec(int n, int m, unordered_map<int,int> &dp){
    if(n==m) return true;
    if(dp.find(n)!=dp.end()) return dp[n];
    if(n%3==0) return dp[n] = rec(n/3,m,dp)||rec(2*(n/3),m,dp);
    return dp[n] = false;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        unordered_map<int,int> dp;
        if(rec(n,m,dp)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // for(int i=0;i<=n;i++) dp[i]=-1;
    }

    return 0;
}