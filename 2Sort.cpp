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
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> pf(n-1,0);
        for(int i=0;i<n-1;i++) pf[i]=(a[i]<2*a[i+1]);

        int ans=0,ct=0;
        for(int i=0;i<k;i++) ct+=pf[i];
        if(ct==k) ans++;
        for(int i=k;i<n-1;i++){
            ct+=pf[i];
            ct-=pf[i-k];
            if(ct==k) ans++;
        }
        
        cout<<ans<<endl;
    }   
    return 0;
}