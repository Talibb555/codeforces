#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,k;cin>>n>>a>>b>>k;
    int h[n];
    for(int i=0;i<n;i++) cin>>h[i];
    
    int ans=0;
    for(int i=0;i<n;i++){
        h[i]=h[i]%(a+b);
        if(h[i]==0) h[i]=a+b;
        h[i]-=a;
    }
    sort(h,h+n);
    for(int i=0;i<n;i++){
        if(k-(h[i]+a-1)/a<0) break;
        ans++;
        if(h[i]<=0) continue;
        k-=(h[i]+a-1)/a;
    }
    cout<<ans<<endl;

    return 0;
}