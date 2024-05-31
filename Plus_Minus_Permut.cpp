#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,x,y;cin>>n>>x>>y;
        long long lcm=(x*y)/__gcd(x,y);
        long long no_x=n/x;
        long long no_y=n/y;
        long long no_lcm=n/lcm;
        no_x-=no_lcm;
        no_y-=no_lcm;
        long long ans=(no_x*(n+n-no_x+1))/2;
        ans-=(no_y*(1+no_y))/2;
        cout<<ans<<endl;
    }
    
    return 0;
}