#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=min(a[0],a[n-1]);
    for (int i = 0; i < n-1; i++)
    {
        ans=min(ans,max(a[i],a[i+1]));
    }
    
    cout<<ans<<endl;
    
    
    
    return 0;
}