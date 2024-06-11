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
        vector<int> u(n),s(n);
        for(int i=0;i<n;i++) cin>>u[i];
        for(int i=0;i<n;i++) cin>>s[i];
        
        map<int,vector<int> > m;
        for(int i=0;i<n;i++) m[u[i]].push_back(s[i]);
        for(auto &i:m) sort(i.second.begin(),i.second.end());

        map<int, vector<long long> > prefix_sums;
        for(auto &i : m) {
            vector<long long> t(i.second.size(), 0);
            t[0]=i.second[0];
            for(int j = 1; j < i.second.size(); j++) {
                t[j] = t[j-1] + i.second[j];
            }
            prefix_sums[i.first] = t;
        }
        for(int k=1;k<=n;k++){
            int ans=0;
            for(auto i:prefix_sums){
                if(k>i.second.size()) continue;
                if(i.second.size()%k==0) ans+=i.second.back();
                else ans+=(i.second.back()-i.second[(i.second.size()%k)-1]);
            }
            cout<<ans<<" ";
        }
        cout<<endl;
        // for(auto i:prefix_sums){
        //     cout<<i.first<<": ";
        //     for(auto j:i.second) cout<<j<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
    }   
    return 0;
}