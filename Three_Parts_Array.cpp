#include <bits/stdc++.h>
using namespace std;

long long bs(vector<long long>& pf, long long target, long long lo){
    // int lo=0;
    long long hi=pf.size()-1;
    while (lo<=hi)
    {
        long long mid=lo+(hi-lo)/2;
        if(pf[mid]==target) return mid;
        else if(pf[mid]>target) lo=mid+1;
        else if(pf[mid]<target) hi=mid-1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> pf1(n,0), pf2(n,0);
    pf1[0]=a[0];
    for(int i=1;i<n;i++) pf1[i]=pf1[i-1]+a[i];
    pf2[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) pf2[i]=pf2[i+1]+a[i];
    // for(auto i:pf1) cout<<i<<" ";
    // cout<<endl;
    // for(auto i:pf2) cout<<i<<" ";
    long long ans=0;
    for(int i=0;i<n;i++){
        long long ind=bs(pf2,pf1[i],i+1);
        if(ind!=-1){ ans=pf2[ind];}
    }
    cout<<ans<<endl;
    return 0;
}