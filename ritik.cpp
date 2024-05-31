#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>&v, int ind, int even){
    if(ind>=v.size()){
        if(even) return 0;
        return -2e9;
    }
    int take=0;
    int not_take=rec(v,ind+1,even);
    if(even){
        if(v[ind]&1) take=v[ind]+rec(v,ind+1,0);
        else take=v[ind]+rec(v,ind+1,1);
    }
    else{
        if(v[ind]&1) take=v[ind]+rec(v,ind+1,1);
        else take=v[ind]+rec(v,ind+1,0);
    }
    return max(take,not_take);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<rec(v,0,1);

    return 0;
}