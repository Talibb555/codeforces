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
        int ct=1;
        // for (int i = 0; i < n; i+=2)
        // {
        //     a[i]=i+1;
        //     // ct++;
        // }
        // for (int i = 1; i < n; i+=2)
        // {
        //     a[i]=i+1;
        //     // ct++;
        // }
        int i=0;
        int ct1;
        if(n&1) ct1=n-1;
        else ct1=n;
        while (ct<=n)
        {
            a[i]=ct;
            i++;
            ct+=2;
        }
        while (ct1>=2)
        {
            a[i]=ct1;
            i++;
            ct1-=2;
        }
        // int odd=(n+1)/2;
        // for (int i = 0; i < odd; i++)
        // {
        //     cout<<ct<<" ";
        //     ct+=2;
        // }
        // for (int i = odd+1; i < n; i++)
        // {
        //     cout<<ct1<<" ";
        //     ct1+=2;
        // }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}   