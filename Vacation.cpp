#include <bits/stdc++.h>
using namespace std;

// int dp[101][3];
map<pair<int,int>,int> dp;

int rec(int ind, int prev, vector<int>& a){
    if(ind==a.size()) return 0;
    // if(dp[ind][prev]!=0) return dp[ind][prev];
    if(dp.find({ind,prev})!=dp.end()) return dp[{ind,prev}];
    int rest,contest,gym;
    rest=contest=gym=1e9;
    // if(prev==0){
    //     rest=1+rec(ind+1,0,a);
    //     if(a[ind]==1 || a[ind]==3) contest=rec(ind+1,1,a);
    //     if(a[ind]==2 || a[ind]==3) gym=rec(ind+1,2,a);
    // }
    if(prev==1 || prev==0){
        rest=1+rec(ind+1,0,a);
        // if(a[ind]==1 || a[ind]==3) contest=rec(ind+1,1,a);
        if(a[ind]==2 || a[ind]==3) gym=rec(ind+1,2,a);
    }
    if(prev==2 || prev==0){
        rest=1+rec(ind+1,0,a);
        if(a[ind]==1 || a[ind]==3) contest=rec(ind+1,1,a);
        // if(a[ind]==2 || a[ind]==3) gym=rec(ind+1,2,a);
    }
    // return dp[ind][prev] = min({rest,contest,gym});
    return dp[{ind,prev}] = min({rest,contest,gym});
}

int main()
{
    int n;
    cin>>n;
    // memset(dp,0,sizeof(dp));
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<rec(0,0,a)<<endl;
    return 0;
}