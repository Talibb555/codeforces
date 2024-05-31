#include <bits/stdc++.h>
using namespace std;

bool f(long long mid, long long a[], long long b[], int n, int k){
    for(int i=0;i<n;i++){
        long long req=mid*a[i];
        if(req>b[i]){
            if(b[i]+k>=req) k=k-(req-b[i]);
            else return false;
        }
    }
    return true;
}

int main()
{
    int n, k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long b[n];
    for(int i=0;i<n;i++) cin>>b[i];

    long long lo=0;
    long long hi=INT_MAX;
    long long ans=0;
    while (lo<=hi)
    {
        long long mid=lo+(hi-lo)/2;
        if(f(mid,a,b,n,k)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;

    return 0;
}