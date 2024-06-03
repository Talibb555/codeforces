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
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        long long total=0;
        for(long long i=0;i<n;i++) {cin>>a[i];total+=a[i];}
        long long sum=a[0], ans=a[0], len=1, maxLen=1;
        for(long long i=1;i<n;i++){
            if(sum<=0) {sum=a[i];len=1;}
            else {sum+=a[i];len++;}
            if(sum>ans){
                maxLen=len;
                ans=sum;
            }
            // cout<<sum<<endl;
        }
        // cout<<"ans: "<<ans<<endl;
        cout<<total<<" "<<ans<<" "<<maxLen<<endl;
        if(maxLen==n || ans<total) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }   
    return 0;
}