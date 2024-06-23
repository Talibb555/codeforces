#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

// int dp[40000+3][]

bool palin(int n){
    string s = to_string(n);
    int len = s.size();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

// int rec(int n, vector<int> &ds, int ind){
//     if(ind>n) return 0;
//     if(n==ind) {
//         // for(auto i:ds) cout<<i<<" ";
//         // cout<<endl;
//         return 1;
//     }
//     int ans=0;
//     for(int i=ind;i<=n;i++){
//         // ds.push_back(i);
//         if(palin(i)) ans+=rec(n,ds,i);
//         // ds.pop_back();
//     }
//     return ans;
// }

const int mod = (int)(1e9+7);
int dp[520][40000+11];

int rec(vector<int> &v, int target, int ind){
    if(target==0) return 1;
    if(ind>=v.size()) return target==0;
    if(dp[target][ind]!=-1) return dp[target][ind];
    int take=0;
    if(target>=v[ind]) take=rec(v,target-v[ind],ind)%mod;
    int notTake=rec(v,target,ind+1)%mod;
    return dp[target][ind] = (take%mod+notTake%mod)%mod;
}

int main()
{
    int t;cin>>t;
    vector<int> v;
    for(int i=1;i<=2*40001;i++){
        if(palin(i)) v.push_back(i);
    }
    
    while(t--){
        int n;cin>>n;
        // vector<int>ds;
        memset(dp,-1,sizeof(dp));
        cout<<rec(v,n,0)<<endl;
    }   
    return 0;
}