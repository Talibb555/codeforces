#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int> &v, int lo, int hi, int target){
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]<target) lo=mid+1;
        else if(v[mid]>target) hi=mid-1;
        else return mid;    
    }
    return -1;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool ans = 1;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int res = binarySearch(a,i+1,n-1,a[i]+k);
            if(res!=-1){
                ans = 0;break;
            }
        }
        if(ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
       
    return 0;
}