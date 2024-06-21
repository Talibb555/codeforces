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
        map<int,vector<int> > indexMap;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            indexMap[a[i]].push_back(i);
        }

        for(auto i:indexMap){
            int start=-1;
            int mx=0;
            // cout<<i.first<<": ";
            for(auto j:i.second){
                // cout<<j<<" ";
                mx=max(mx,j-start);
                start=j;
            }
            mx=max(mx,n-start);
            // cout<<mx;
            // cout<<endl;

            if(m.find(mx)!=m.end()) m[mx]=min(m[mx],i.first);
            else m[mx]=i.first;
        }

        int ans=INT_MAX;

        // for(auto i:m) cout<<i.first<<" "<<i.second<<endl;

        for(int i=1;i<=n;i++){
            if(m.find(i)==m.end() && ans==INT_MAX) cout<<-1<<" ";
            else{
                if(m.find(i)!=m.end() && m[i]<ans){
                    ans=m[i];
                }
                cout<<ans<<" ";
            }
        }
        cout<<endl;

    }   
    return 0;
}