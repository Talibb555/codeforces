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
        string s;cin>>s;

        vector<int> pf(n+1,0);
        int x0=0,x1=0;
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]^a[i-1];
            if(s[i-1]=='0') x0^=a[i-1];
            else x1^=a[i-1];
        }

        int q;cin>>q;
        while(q--){
            int x;cin>>x;
            if(x==1){
                int l,r;cin>>l>>r;
                int XOR=pf[r]^pf[l-1];
                x0^=XOR;
                x1^=XOR;
            }
            else{
                int g;cin>>g;
                if(g==0) cout<<x0<<" ";
                else cout<<x1<<" ";
            }
        }
        cout<<endl;
    }   
    return 0;
}