#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int> &v, int lo, int hi, int target){
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]>target) lo=mid+1;
        else if(v[mid]<target) hi=mid-1;
        else return mid;    
    }
    return -1;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> pf1(n,0), pf2(n,0);
        pf1[0]=v[0];
        pf2[n-1]=v[n-1];
        for(int i=1;i<n;i++) pf1[i]=pf1[i-1]+v[i];
        for(int i=n-2;i>=0;i--) pf2[i]=pf2[i+1]+v[i];

        // for(auto i:pf1) cout<<i<<" ";
        // cout<<endl;
        // for(auto i:pf2) cout<<i<<" ";
        // cout<<endl;

        int ans = 0;

        for(int i=0;i<n;i++){
            int result = binarySearch(pf2,i+1,n-1,pf1[i]);
            // cout<<result<<endl;
            if(result!=-1) ans = max(ans,i+1+n-result);
        } 

        cout<<ans<<endl;
    }
    
    return 0;
}