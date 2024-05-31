#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> dp;

int rec(int a[], int n, int ind, int prev){
    if(ind==n) return 0;
    if(dp.find({ind,prev})!=dp.end()) return dp[{ind,prev}];
    int take=0;
    if(prev==-1 || __gcd(a[ind],a[prev])>1) take=1+rec(a,n,ind+1,ind);
    int not_take=rec(a,n,ind+1,prev);
    return dp[{ind,prev}] = max(take,not_take);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // memset(dp,-1,sizeof(dp));
    cout<<rec(a,n,0,-1)<<endl;
    return 0;
}