#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n-1];
    a[0]=0;
    for (int i = 1; i <= n-1; i++)
    {
        cin>>a[i];
    }
    int hsh[n]={0};
    hsh[1]++;
    for (int i = 1; i <= n-1;)
    {
        int index=a[i]+i;
        i=index;
        hsh[index]++;
    }
    // for (int i = 1; i < n; i++)
    // {
    //     cout<<hsh[i]<<" ";
    // }
    if(hsh[t]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    return 0;
}