#include <bits/stdc++.h>
using namespace std;

bool f(long long mid, int a[], long long n, long long h){
    long long ct=0;
    for(int i=0;i<n-1;i++){
        if(mid-1+a[i]<a[i+1]) ct+=mid;
        else ct+=abs(a[i]-a[i+1]);
    }
    ct+=mid;
    return ct>=h;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,h;
        cin>>n>>h;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        long long lo=1;
        long long hi=1e18;
        long long ans=0;
        while (lo<=hi)  
        {
            long long mid=lo+(hi-lo)/2;
            if(f(mid,a,n,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}