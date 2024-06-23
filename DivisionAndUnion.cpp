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
        vector<pair<int,int> > v(n), a;
        for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
        a=v;
        sort(v.begin(),v.end());

        int l1=v[0].first,r1=v[0].second,l2=-1,r2=-1;
        bool f=0;
        for(int i=1;i<n;i++){
            if((v[i].first>=l1 && v[i].first<=r1)){
                l1=min(l1,v[i].first);
                r1=max(r1,v[i].second);
            }
            else {
                f=1;
                break;
            }
        }
        if(!f) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                if(a[i].first>=l1 && a[i].second<=r1) cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
        }
    }   
    return 0;
}