#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

bool f(int time, map<int,int> &m, int n){
    int extraTime=0, neededTime=0;
    for(int i=1;i<=n;i++){
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
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> a(m);
        map<int,int> mp;
        for(int i=0;i<m;i++) {cin>>a[i];mp[a[i]]++;}

        int lo=0, hi=2*m;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(f(mid,mp,n)){
                ans=mid;
                hi=mid-1;
            } else lo=mid+1;
        }
        cout<<ans<<endl;
    }   
    return 0;
}