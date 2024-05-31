#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,k;cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());

        vector<long long> pf(n,0);
        pf[0]=0;
        for(long long i=1;i<n;i++) pf[i]=a[i]+pf[i-1];

        long long ans= 0;

        for(long long i=0;i<=k;i++){
            ans=max(ans,pf[n-i-1]-pf[2*1LL*(k-i)-1]);
        } 
        cout<<ans<<endl;
    }
    
    return 0;
}