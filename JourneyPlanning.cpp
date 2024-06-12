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
    vector<int> a(n);
    map<int,vector<int> >m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]-i].push_back(i);
    }   
    int ans=0;
    for(auto i:m){
        int sum=0;
        for(auto j:i.second){
            sum+=a[j];
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}