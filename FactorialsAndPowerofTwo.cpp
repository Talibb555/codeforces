#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

vector<long long> v;
map<pair<long long,long long>,long long> dp;

void build(){
    long long fact=1;
    for (long long i = 1; fact <= 1e12; ++i) {
        v.push_back(fact);
        // cout<<fact<<endl;
        if (fact > 1e12 / (i + 1)) break;
        fact *= (i + 1);
    }

    long long n=2;
    while(n<=1e12){
        n*=2;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
}

long long rec(long long ind, long long target){
    if(target==0) return 0;
    if(ind==v.size()){
        if(target==0) return 0;
        return 1e9;
    }
    if(dp.find(make_pair(ind,target))!=dp.end()) return dp[make_pair(ind,target)];
    long long take=INT_MAX;
    if(target-v[ind]>=0) take=1+rec(ind+1,target-v[ind]);
    long long notTake=rec(ind+1,target);
    return dp[make_pair(ind,target)] = min(take,notTake);
}

int main()
{
    long long t;cin>>t;
    build();
    // for(long long i=0;i<29;i++) cout<<v[i]<<" ";
    while(t--){
        long long n;
        cin>>n;
        cout<<rec(0,n)<<endl;
    }   
    return 0;
}