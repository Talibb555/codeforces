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
        int mx=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                mx=max(mx,a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
        cout<<(int)ceil(log2(mx+1))<<endl;
    }
    
    return 0;
}