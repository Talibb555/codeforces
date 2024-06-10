#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    long long n,m;cin>>n>>m;
    map<long long,vector<long long> > mx,my;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            long long x;cin>>x;
            mx[x].push_back(i);
            my[x].push_back(j);
        }
    }   
    long long ans=0;
    for(auto &i:mx){
        sort(i.second.begin(),i.second.end());
        // cout<<i.first<<": ";
        // for(auto j:i.second) cout<<j<<" ";
        // cout<<endl;
        vector<long long> t=i.second;
        long long sum=accumulate(t.begin(),t.end(),0);
        for(long long j=0;j<t.size();j++){
            ans+=(sum-(t[j]*(t.size()-j)));
            sum-=t[j];
        }
        // cout<<ans<<endl;
    }
    for(auto &i:my){
        sort(i.second.begin(),i.second.end());
        // cout<<i.first<<": ";
        // for(auto j:i.second) cout<<j<<" ";
        // cout<<endl;
        vector<long long> t=i.second;
        long long sum=accumulate(t.begin(),t.end(),0);
        for(long long j=0;j<t.size();j++){
            ans+=(sum-(t[j]*(t.size()-j)));
            sum-=t[j];
        }
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}