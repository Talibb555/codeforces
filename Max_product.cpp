#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long ans=-1e18;
        for(int i=0;i<5;i++){
            int aa,bb,cc,dd,ee;
            ee=(n-1+i)%n;
            dd=(n-2+i)%n;
            cc=(n-3+i)%n;
            bb=(n-4+i)%n;
            aa=(n-5+i)%n;
            long long val=a[aa]*a[bb]*a[cc]*a[dd]*a[ee];
            ans=max(ans,val);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}