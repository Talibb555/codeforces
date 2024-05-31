#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long ans=0;
        int mx=INT_MIN, mn=INT_MAX, indmin, indmax;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]>mx){
                mx=max(a[i],mx);
                indmax=i;
            }
            if(a[i]<mn){
                mn=min(a[i],mn);
                indmin=i;
            }
        }
        // a[indmin]=INT_MAX;
        // a[indmax]=INT_MIN;
        ans+=mx-mn;
        // cout<<mx<<" "<<mn<<endl;
        mx=INT_MIN, mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            // cin>>a[i];
            if(a[i]>mx && i!=indmax){
                mx=max(a[i],mx);
                // indmax=i;
            }
            if(a[i]<mn && i!=indmin){
                mn=min(a[i],mn);
                // indmin=i;
            }
        }
        // a[indmin]=INT_MAX;
        // a[indmax]=INT_MIN;
        ans+=mx-mn;
        cout<<ans<<endl;
    }
    
    return 0;
}