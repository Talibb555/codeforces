#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];    
        for(int i=0;i<n;i++) cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());    

        long long ans=1;
        int mod=1e9+7;

        for(int i=0;i<n;i++){
            int greaterCount = a.size() - (upper_bound(a.begin(),a.end(),b[i])-a.begin());
            ans = (ans%mod * max(greaterCount-i,0)%mod)%mod;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}