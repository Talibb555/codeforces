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
        long long n,k;cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];

        if(k>=3){
            cout<<0<<endl;
            continue;
        }

        sort(a.begin(),a.end());
        long long ans=a[0];

        for(long long i=0;i<n-1;i++) ans=min(ans,a[i+1]-a[i]);
        if(k==1){
            cout<<ans<<endl;
            continue;
        }
        for(long long i=0;i<n;i++){
            for(long long j=0;j<i;j++){
                long long v=a[i]-a[j];
                long long p=lower_bound(a.begin(),a.end(),v)-a.begin();
                if(p<n) ans=min(ans,a[p]-v);
                if(p>0) ans=min(ans,v-a[p-1]);
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}