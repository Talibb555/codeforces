#include <bits/stdc++.h>
using namespace std;

vector<long long> ct(100000+5,0);
long long dp[100000+5];

long long rec(int ind){
    if(ind<=0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    long long take=ct[ind]*ind+rec(ind-2);
    long long not_take=rec(ind-1);
    return dp[ind] = max(take,not_take);
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int mn=INT_MIN;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ct[a]++;
        mn=max(mn,a);
    }
    cout<<rec(mn);

    return 0;
}