#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<m;i++){
        int ind=upper_bound(a,a+n,b[i])-a;
        ans=ind;
        // if(a[ind]!=b[i]) ans--;
        cout<<ans<<" ";
        // ans=0;
        // cout<<a[ind+1]<<" ";
    }
    return 0;
}