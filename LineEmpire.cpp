#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;



long long rec(vector<long long> &v, long long ind, long long a, long long b, long long cap){
    if(ind>=v.size()) return 0;
    long long changeCapital = b*(abs(v[cap]-v[ind])) + a*(abs(v[cap]-v[ind])) + rec(v,ind+1,a,b,ind);
    long long notChangeCapital = b*(abs(v[cap]-v[ind])) + rec(v,ind+1,a,b,cap);
    return min(changeCapital,notChangeCapital);
}

int main()
{
    long long t;cin>>t;
    while(t--){
        long long n,a,b;cin>>n>>a>>b;
        vector<long long> x(n+1);
        x[0]=0;
        for(long long i=1;i<=n;i++) cin>>x[i];
        cout<<rec(x,1,a,b,0)<<endl;
    }   
    return 0;
}