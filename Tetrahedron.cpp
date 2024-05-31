#include <bits/stdc++.h>
using namespace std;

int mod=(int)(1e9+7);
long long dp[10000000+1][2];

long long rec(long long path, int dis_from_D){
    if(path==0) return dis_from_D==0;
    if(dp[path][dis_from_D]!=-1) return dp[path][dis_from_D];
    long long f1=0,f2=0;
    if(dis_from_D==0) f1=3*rec(path-1,1)%mod;
    if(dis_from_D==1) f2=(2*rec(path-1,1)%mod+rec(path-1,0)%mod)%mod;
    return dp[path][dis_from_D] = (f1+f2)%mod;
}

int main()
{
    long long n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(n,0)<<endl;
    return 0;
}