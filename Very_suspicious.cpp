#include <bits/stdc++.h>
using namespace std;

bool f(long long mid, long long n){
    long long x=mid/3;
    long long y=mid/3;
    long long z=mid/3;
    if(mid%3) x++;
    if(mid%3==2) y++;
    return 2LL*(x*y+y*z+z*x)>=n;
}

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        long long lo=0,hi=1e6;
        long long ans=-1;
        while (lo<=hi)
        {
            long long mid=lo+(hi-lo)/2;
            if(f(mid,n)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}