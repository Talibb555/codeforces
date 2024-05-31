#include <bits/stdc++.h>
using namespace std;

int mod=(int)(1e9+7);

int dp[2005][2005];

int rec(int ind, int n, int k){
    if(ind>n) return 0;
    if(k==0) return 1;
    if(dp[ind][k] !=-1) return dp[ind][k];
    int ans=0;
    for(int i=ind;i<=n;i+=ind){
        if(i%ind==0) ans=(ans%mod+rec(i,n,k-1)%mod)%mod;
    }
    return dp[ind][k] = ans%mod;
}

int main()
{
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    cout<<rec(1,n,k)<<endl;
    return 0;
}