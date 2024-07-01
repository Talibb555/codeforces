#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    return p1.first<p2.first;
}

int main()
{
    int n;cin>>n;
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;

    sort(v.begin(),v.end(),cmp);
    for(int i=1;i<v.size();i++){
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].first<=v[i-1].second && v[i].second<=v[i-1].second) {
            cout<<i+1<<" "<<i<<endl;
            return 0;
        }
    }   
    cout<<-1<<" "<<-1<<endl;
    return 0;
}