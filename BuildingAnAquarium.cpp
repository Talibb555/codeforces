#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &v, int mid, int x){
    long long water=0;
    for(auto i:v){
        if(mid>i) water+=mid-i;
    }
    // cout<<"height "<<mid<<" :"<<water<<endl;
    return water<=x;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,x;cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int lo=1, hi=INT_MAX;
        int ans=-1;

        while (lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(f(a,mid,x)){
                ans=mid;
                lo=mid+1;
            }    
            else hi=mid-1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}