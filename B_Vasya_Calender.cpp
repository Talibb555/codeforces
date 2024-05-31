#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d,n;
    cin>>d>>n;
    int a[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<d) ans+=d-a[i];
    }
    cout<<ans+a[n-1]-d<<endl;
    
    return 0;
}