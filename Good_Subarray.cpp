#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        vector<int> v(n);
        for(int i=0;i<n;i++) v[i]=s[i]-'0'-1;
        vector<long long> pf(n);
        pf[0]=v[0];
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]+v[i];
        }
        unordered_map<long long,long long> m;
        m[0]=1;
        long long ans=0;
        // for(auto i:pf) cout<<i<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++){
            ans+=m[pf[i]];
            m[pf[i]]++;
        }
        cout<< ans<<endl;
    }
    
    return 0;
}