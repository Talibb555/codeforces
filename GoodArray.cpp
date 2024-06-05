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
    map<long long,long long> m;
    for(long long i=0;i<n;i++) {cin>>a[i];m[a[i]]++;}
    long long sum=accumulate(a.begin(),a.end(),0LL);
    vector<long long> ans;
    for(long long i=0;i<n;i++){
        sum-=a[i];
        --m[a[i]];
        if(sum%2 == 0 && m.find(sum/2)!=m.end() && m[sum/2]>0) ans.push_back(i);
        sum+=a[i];
        ++m[a[i]];
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i+1<<" ";
    cout<<endl;

    return 0;
}