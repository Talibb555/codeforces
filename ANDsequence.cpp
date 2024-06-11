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
    int MOD=1e9+7;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mn=*min_element(a.begin(),a.end());
        bool ok=false;
        long long ct=0;
        for(int i=0;i<n;i++){
            if(mn==a[i]) {ct++;continue;}
            if((a[i]&mn)!=mn){
                cout<<0<<endl;
                ok=true;
                break;
            }
        }
        if(ok) continue;
        long long fact=1;
        for(long long i=1;i<=n-2;i++){
            fact = (fact*i)%MOD;
        }
        long long ans=ct*(ct-1);
        ans%=MOD;
        ans=ans*fact;
        ans%=MOD;
        cout<<ans<<endl;
    }   
    return 0;
}