#include <bits/stdc++.h>
using namespace std;

int bs(vector<pair<int,int>>&v, int target, int lo, int hi){
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid].first>target) hi=mid-1;
        else if(v[mid].first<target) lo=mid+1;
        else return mid;
    }
    return -1;
}

int main()
{
    int n,x;cin>>n>>x;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int target=x-v[i].first;
        int ind=bs(v,target,i+1,n);
        if(ind!=-1 && ind!=i){ cout<<v[i].second<<" "<<v[bs(v,target,i+1,n)].second<<endl;return 0;}
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}