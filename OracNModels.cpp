#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

        vector<int> dp(n+1,1);
        for(int i=1;i<=n;i++){
            for(int j=2*i;j<=n;j+=i){
                if(a[i]<a[j]) dp[j]=max(1+dp[i],dp[j]);
            }
        }
        cout<<*max_element(dp.begin()+1,dp.end())<<endl;
    }   
    return 0;
}