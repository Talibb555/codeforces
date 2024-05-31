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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int flag=0;
        int ct=0;
        bool t=false;
        if(a[n-1]>=a[n-2]) flag=1;
        if(flag==1){
            for (int i = 0; i < n-1; i++)
            {
                if(a[i]==a[n-1]){
                    cout<<n<<endl;
                    // break;
                    return 0;
                }
            }  
        }
        // for (int i = n-1; i >=0; i--)
        // {
        //     if(a[i]<a[i-1]){
        //         ct++;
        //     }
        //     else{
        //         cout<<n-ct<<endl;
        //         // break;
        //         return 0;
        //     }
        // }
        int k;
        int p=0;
        for (int i = n-1; i >=0; i--)
        {
            if(a[i]>a[i-1] && t==false){
                ct++;
            }
            else{
                k=a[i];
                t=true;
                p++;
                continue;
            }
            if(a[i-1]>t){
                ct++;
                t=a[i-1];
            }
        }
        cout<<ct<<endl;
        cout<<p<<endl;
        
    }
    
    return 0;
}