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
    int n;cin>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    
    int l1=v[0].first, r1=v[0].second, l2=-1, r2=-1;
    int tv=1;

    for(int i=1;i<v.size();i++){
        if(v[i].first<=l1) tv++;
        if(tv>=3){
            cout<<"NO"<<endl;
            return 0;
        }

    }

    cout<<"YES"<<endl;
    return 0;
}