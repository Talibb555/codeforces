#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include<queue>
#include<stack>
using namespace std;

int bs(vector<pair<int,int> > &v, int lo, int hi, int target){
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid].first>target){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return ans;
}

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int> > a;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            if(x<i) a.push_back(make_pair(x,i));
        }
        sort(a.begin(),a.end());
        long long ans=0;
        for(int i=0;i<a.size();i++){
            int ind = bs(a,i+1,a.size()-1,a[i].second);
            // cout<<ind<<endl;
            if(ind!=-1) ans += (a.size()-ind);
        }
        cout<<ans<<endl;
        // cout<<endl;
    }
    return 0;
}