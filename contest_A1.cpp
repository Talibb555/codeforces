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
        vector<int> v(n);
        long long ct=0;
        // int mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            // ct+=v[i];
            // if(i==0) {v[i]--;continue;}
            // if(v[i]<mn){
            //     mn=v[i];
            // }
        }
        // cout<<abs(ct)<<jl;
        // if(n>2) ct-=mx;
        int a=*min_element(v.begin(),v.end());
        if(v[0]==a) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        // int length=3*n;
        // int i=1,j=3*n;
        // int ct=0;
        // if(n%2==0){
        //     cout<<n/2<<jl;
        // }
        // else cout<<(n/2)+1<<jl;
        // while (j>i)
        // {
        //     // cout<<i<<" "<<j<<jl;
        //     ct++;
        //     i+=3;
        //     j-=3;
        // }
        // cout<<ct<<endl;
        // i=1,j=3*n;
        // while (j>i)
        // {
        //     cout<<i<<" "<<j<<endl;
        //     // ct++;
        //     i+=3;
        //     j-=3;
        // }
    }
    
    return 0;
}