#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        a[i]=i+1;
    }
    int t=0;
    while (k--)
    {
        int x=a[t+2];
        a[t+2]=a[t];
        a[t]=x;
        t+=2;
    }
    for (int i = 0; i < 2*n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}