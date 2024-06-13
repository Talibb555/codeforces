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
    long long n;cin>>n;
    vector<long long> a(n);
    map<long long,vector<long long> >m;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        m[a[i]-i].push_back(i);
    }   
    long long ans=0;
    for(auto i:m){
        long long sum=0;
        for(auto j:i.second){
            sum+=a[j];
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}