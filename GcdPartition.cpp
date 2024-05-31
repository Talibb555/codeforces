#include <bits/stdc++.h>
using namespace std;

long long __gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];

        vector<long long> pf1(n,0),pf2(n,0);
        pf1[0]=a[0];
        for(long long i=1;i<n;i++) pf1[i]=pf1[i-1]+a[i];
        pf2[n-1]=a[n-1];
        for(long long i=n-2;i>=0;i--) pf2[i]=pf2[i+1]+a[i];

        long long ans=0;

        for(long long i=0;i<n-1;i++){
            ans=max(ans,__gcd(pf1[i],pf2[i+1]));
        }
        cout<<ans<<endl;
    }
       
    return 0;
}