#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        long long ans=0, sum=0;
        int ind=0, mx=0;

        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            mx=max(b[i],mx);
            ans=max(ans,sum+(k-(i+1))*mx);
        }

        cout<<ans<<endl;
    }
    
    return 0;
}