#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pf[n]={0};
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        pf[l]+=1;
        if(r!=n-1) pf[r+1]-=1;
    }
    for(int i=1;i<n;i++) pf[i]=pf[i-1]+pf[i];
    sort(a,a+n);
    sort(pf,pf+n);
    long long ans=0;
    for(int i=0;i<n;i++) ans+=pf[i]*1LL*a[i];
    cout<<ans<<endl;
    
    return 0;
}