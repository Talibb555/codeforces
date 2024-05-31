#include <bits/stdc++.h>
using namespace std;

bool f(long long mid, long long n){
    long long ct=0;
    for(long long i=1;i<=n;i++){
        ct+=min(n,mid/i);
    }
    return ct>=(n*n+1)/2;
}

int main()
{
    long long n;cin>>n;
    long long lo=1,hi=n*n;
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
    
    return 0;
}