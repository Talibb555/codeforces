#include <bits/stdc++.h>
using namespace std;

bool f(long long mid, vector<int>&v, int k){
    int ct=0;
    long long sum=0;
    int n=v.size();
    for(int i=0;i<n;i++){
       sum+=v[i];
       if(sum>mid){
        ct++;
        sum=v[i];
       }
    }
    return ct<=k;
}

int main()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    long long lo=*max_element(v.begin(),v.end());
    long long hi=accumulate(v.begin(),v.end(),0LL);
    long long ans=-1;

    while (lo<=hi)
    {
        long long mid=lo+(hi-lo)/2;
        if(f(mid,v,k-1)){
            hi=mid-1;
            ans=mid;
        }
        else lo=mid+1;
    }
    cout<<ans<<endl;
    
    return 0;
}