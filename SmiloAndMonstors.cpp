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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        long long sum=accumulate(a.begin(),a.end(),0LL);
        int ans=0;
        if(sum&1) ans++;
        ans+=(sum/2);
        sum/=2;
        int j=n-1;
        while(j>=0 && sum>0){
            sum-=a[j];
            j--;
            ans++;
        }
        cout<<ans<<endl;
    }   
    return 0;
}