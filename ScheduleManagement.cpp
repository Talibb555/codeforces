#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

bool f(long long time, map<long long,long long> &m, long long n){
    long long extraTime=0, neededTime=0;
    for(long long i=1;i<=n;i++){
        if(time<=m[i]){
            neededTime+=(m[i]-time);
        } else {
            extraTime+=(time-m[i])/2;
        }
    }
    return extraTime>=neededTime;
}

int main()
{
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        vector<long long> a(m);
        map<long long,long long> mp;
        for(long long i=0;i<m;i++) {cin>>a[i];mp[a[i]]++;}

        long long lo=0, hi=2*m;
        long long ans=-1;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(f(mid,mp,n)){
                ans=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        cout<<ans<<endl;
    }   
    return 0;
}