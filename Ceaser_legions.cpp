#include <bits/stdc++.h>
using namespace std;

int dp[101][101][11][11];
int mod=(int)(1e8);

int rec(int n1, int n2, int k1, int k2, int l, int m){
    if(n1==0 && n2==0) return 1;
    // if(n1<=0 || n2<=0) return 0;
    if(dp[n1][n2][k1][k2]!=-1) return dp[n1][n2][k1][k2];
    int one=0,zero=0;
    if(k1<l && n1>0){
        one=rec(n1-1,n2,k1+1,0,l,m)%mod;
    }
    if(k2<m && n2>0){
        zero=rec(n1,n2-1,0,k2+1,l,m)%mod;
    }
    return dp[n1][n2][k1][k2] = (one%mod+zero%mod)%mod;
}

int main()
{
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    memset(dp,-1,sizeof(dp));
    cout<<rec(n1,n2,0,0,k1,k2)<<endl;
    return 0;
}