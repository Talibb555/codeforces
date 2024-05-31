#include <bits/stdc++.h>
using namespace std;

bool f(int mid, int a[], int n, int k){
    int maxdif=0;
    for(int i=1;i<n;i++){
        maxdif=max(maxdif,abs(a[i]-a[i-1]));
        if(maxdif>mid){
            k++;
            if(k>mid) return false;
            maxdif=0;
            i--;
        }
    }
    return true;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int lo=0,hi=1e9;
        int ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(f(mid,a,n,0)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}