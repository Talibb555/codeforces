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
        sort(a,a+n);
        int ans=0;
        int ct=0;
        for(int i=0;i<n;i++){
            ct++;
            if(ct==a[i]) {ans++;ct=0;}
        }
        cout<<ans<<endl;
    }
    
    return 0;
}