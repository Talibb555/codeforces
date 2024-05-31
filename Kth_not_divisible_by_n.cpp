#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int lo=1;
        int hi=INT_MAX;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int sol=mid-mid/n;
            if(sol>k) hi=mid-1;
            else if(sol<k) lo=mid+1;
            else{
                ans=mid;
                hi=mid-1;
                // break;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}