#include <bits/stdc++.h>
using namespace std;

long long dp[100000+10][2];

long long rec(vector<long long>& h1, vector<long long>& h2, int ind, int lane){
    if(ind==h1.size()) return 0;
    if(dp[ind][lane]!=-1) return dp[ind][lane];
    long long take=0;
    if(lane==1) take=h1[ind]+rec(h1,h2,ind+1,2);
    if(lane==2) take=h2[ind]+rec(h1,h2,ind+1,1);
    long long not_take=rec(h1,h2,ind+1,lane);
    return dp[ind][lane] = max(take,not_take);
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<long long> h1(n),h2(n);
    for(int i=0;i<n;i++) cin>>h1[i];
    for(int i=0;i<n;i++) cin>>h2[i];
    cout<<max(rec(h1,h2,0,1),rec(h1,h2,0,2))<<endl;
    return 0;
}