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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> dp(n,1);
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=i+i;j<=n;j+=i){
                if(a[i-1]<a[j-1]) dp[j-1]=max(dp[j-1],dp[i-1]+1);
            }
        }
        cout<<*max_element(dp.begin(),dp.end()) <<endl;
    }
    
    return 0;
}