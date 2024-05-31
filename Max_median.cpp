#include <bits/stdc++.h>
using namespace std;

bool f(int mid, int k, vector<int>&v){
    long long sum=0;
    for(int i=(v.size())/2;i<v.size();i++){
        sum+=max(0,mid-v[i]);
    }
    return sum<=k;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int lo=1;
    int hi=2e9;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(f(mid,k,a)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}