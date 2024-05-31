#include <bits/stdc++.h>
using namespace std;

int power2(int n){
    int ct=0;
    while (n%2==0)
    {
        ct++;
        n/=2;
    }
    return ct;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,q;cin>>n>>q;
        vector<int> a(n), p(31);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<q;j++) {
            int x;cin>>x;
            p[x]++;
        } 

        // vector<int> power(n);
        // for(int i=0;i<n;i++) power[i]=power2(a[i]);

        // for(auto i:power) cout<<i<<" ";
        // cout<<endl;

        for(int i=1;i<31;i++){
            for(int j=0;j<n;j++){
                if(p[i]!=0 && power2(a[j])>=i) a[j]+=p[i]*pow(2,i-1);
            }
        } 

        for(auto i:a) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}