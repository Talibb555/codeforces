#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

// vector<int> solve(int n, int lo, int hi){
//     vector<int> ans;
//     // if(hi-lo)
//     ans.push_back(hi-1);
//     ans.push_back(hi);
//     int x=hi-1;
//     bool ok=1;
//     for(int j=0;j<n-2;j++){
//         ans.push_back(x);
//         x--;
//         if(x<lo) ok=0;
//     }
//     if(!ok) return {-1};
//     return ans;
// }

int rec(vector<int> &v, int ind , int last, bool first, int k){
    if(ind>v.size()) return 0;
    int take=0, notTake=0;
    if(first){
        take=1+rec(v,ind+1,v[ind],0,k);
    } else {
        if((last^v[ind])==k) take=1+rec(v,ind+1,v[ind],0,k);
    }
    notTake=rec(v,ind+1,last,first,k);
    return max(take,notTake);
}

int main()
{
    // int n,hi,lo;cin>>n>>hi>>lo;   
    // vector<int> ans=solve(n,hi,lo);
    // for(auto i:ans) cout<<i<<" ";

    vector<int> v(5);
    for(int i=0;i<5;i++) cin>>v[i];
    cout<<rec(v,0,0,1,2)<<endl;
    return 0;
}