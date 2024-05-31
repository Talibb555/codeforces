#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        vector<pair<char,int>> v;
        int k=-1;
        for(int i=0;i<s.size();i++){
            if(k==-1||s[i]!=v[k].first){
                v.push_back({s[i],1});
                k++;
            }
            else v[k].second++;
        }
        int ans=INT_MAX;
        for(int i=1;i<=k-1;i++){
            if(v[i-1].first!=v[i+1].first) ans=min(ans,v[i].second+2);
        }
        if(ans==INT_MAX) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    
    return 0;
}