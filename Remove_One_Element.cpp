#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> dp(n,1),dp1(n,1);
    int ans=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) dp[i]=dp[i-1]+1;  
        ans=max(ans,dp[i]);
    }
    for(int i=n-2;i>=0;i--){
        if(a[i+1]>a[i]) dp1[i]=dp1[i+1]+1;
        ans=max(ans,dp1[i]);
    }

    for(int i=0;i<n-2;i++){
        if(a[i]<a[i+2]) ans=max(ans,dp[i]+dp1[i+2]);
    }
    cout<<ans<<endl;

    return 0;
}