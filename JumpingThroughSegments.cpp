#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

bool f(vector<pair<int,int> >&v, int k){
    int lastl=0,lastr=0;
    for(int i=0;i<v.size();i++){
        int l=v[i].first;
        int r=v[i].second;
        lastl=max(lastl-k,l);
        lastr=min(lastr+k,r);
        if(lastl>lastr) return false;
    }
    return true;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;

        int lo=0,hi=1e9+4;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(f(v,mid)){
                ans=mid;
                hi=mid-1;
            } else {
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}