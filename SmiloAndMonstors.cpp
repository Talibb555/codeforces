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
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        long long sum=accumulate(a.begin(),a.end(),0LL);
        long long ans=0;
        if(sum&1) ans++;
        ans+=(sum/2);
        sum/=2;
        long long j=n-1;
        while(j>=0 && sum>0){
            sum-=a[j];
            j--;
            ans++;
        }
        cout<<ans<<endl;
    }   
    return 0;
}