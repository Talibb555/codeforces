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
        int a[n],b[n];
        int mn=1e9;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            mn=min(a[i],mn);
        }
        sort(b,b+n);
        int f=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && a[i]%mn!=0) f=1;
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}