#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> dp(n,0);
    for(int i=1;i<n-1;i++){
        int add=(v[i-1]>=v[i] && v[i]>=v[i+1]);
        dp[i]=dp[i-1]+add;
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        if(l==r) cout<<1<<endl;
        else cout<<r-l+1-dp[r-1]+dp[l]<<endl;
    }
    // for(auto i:dp) cout<<i<<" ";
    
    return 0;
}