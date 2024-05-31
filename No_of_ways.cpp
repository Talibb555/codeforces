#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<long long> pf(n);
    pf[0]=v[0];
    for(int i=1;i<n;i++) pf[i]=pf[i-1]+v[i];

    if(pf[n-1]%3!=0) {cout<<0<<endl;return 0;}

    long long first=pf[n-1]/3;
    long long second=first*2;

    int ans=0,ct=0;

    for(int i=0;i<n-1;i++){
        if(pf[i]==second) ans+=ct;
        if(pf[i]==first) ct++;
    }
    cout<<ans<<endl;
    return 0;
}