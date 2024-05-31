#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,x,y;cin>>n>>x>>y;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];

        map<pair<long long,long long>,long long> m;
        long long ans=0;
        for(long long i=0;i<n;i++){
            ans+=m[make_pair((x-(a[i]%x))%x,a[i]%y)];
            m[make_pair(a[i]%x,a[i]%y)]++;
        }
        cout<<ans<<endl;
    }
       
    return 0;
}