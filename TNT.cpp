#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];

        vector<long long> v,pf(n,0);
        pf[0]=a[0];

        for(long long i=1;i<n;i++) pf[i]=a[i]+pf[i-1];
        // v.push_back(1);
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(n/i!=i) v.push_back(n/i); 
            }
        }

        long long ans=*max_element(a.begin(),a.end())-*min_element(a.begin(),a.end());

        for(long long k=0;k<v.size();k++){
            long long mx=pf[v[k]-1], mn=pf[v[k]-1];
            for(long long i=2*v[k]-1;i<n;i+=v[k]){
                mx=max(mx,pf[i]-pf[i-v[k]]);
                mn=min(mn,pf[i]-pf[i-v[k]]);
            }
            ans=max(ans,mx-mn);
        }

        cout<<ans<<endl;
    }
    
    return 0;
}