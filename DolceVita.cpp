#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,x;cin>>n>>x;
        vector<long long> a(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        long long sum=0,day=0,ans=0;
        for(long long i=0;i<n;i++) sum+=a[i];
        for(long long i=n-1;i>=0;i--){
            if(sum>x){
                sum-=(a[i]+day);
                continue;
            }
            long long extra = (x-sum)/(i+1);
            ans+=((extra+1)*(i+1));
            day+=(extra+1);
            sum+=((extra+1)*(i+1));
            sum-=((a[i]+day));
        }
        cout<<ans<<endl;
    }

    return 0;
}