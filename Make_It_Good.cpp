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
        for(int i=0;i<n;i++) cin>>a[i];
        int peak=n-1;
        for(int i=n-2;i>=0;i--){
            if(a[i]>=a[i+1]) peak=i;
            else break;
        }
        int ans=peak;
        for(int i=peak-1;i>=0;i--){
            if(a[i]<=a[i+1]) ans=i;
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}