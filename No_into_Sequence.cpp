#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<pair<long long,long long>> v;
        for(long long i=2;i*i<=n;i++){
            int ct=0;
            while (n%i==0)
            {
                ct++;
                n=n/i;
            }
            if(ct) v.push_back({ct,i});
        }
        if(n>1) v.push_back({1,n});
        sort(v.rbegin(),v.rend());
        vector<long long > ans;
        for(int i=0;i<v[0].first;i++) ans.push_back(v[0].second);
        for(int i=1;i<v.size();i++){
            for(int j=0;j<v[i].first;j++) ans[v[0].first-1]*=v[i].second;
        }
        cout<<v[0].first<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}