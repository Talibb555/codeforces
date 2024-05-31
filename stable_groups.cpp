#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k,x;
    cin>>k>>x;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int ct=1;
    for(int i=0;i<n-1;i++){
        long long dif=a[i+1]-a[i];
        if(dif>x){
            if((dif-1)/x<=k) k-=(dif-1)/x;
            else ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}