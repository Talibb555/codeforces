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
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            m[x]++;
        }
        vector<int> v;
        for(auto i:m) v.push_back(i.second);
        sort(v.rbegin(),v.rend());
        int ans=v[0];
        int last=v[0];
        for(int i=1;i<v.size();i++){
            if(last==0) break;
            if(v[i]>=last){
                ans+=last-1;
                last-=1;
            } else {
                ans+=v[i];
                last=v[i];
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}