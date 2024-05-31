#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    long long ct=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            ct+=a[i]-a[i+1];
        }
    }
    cout<<ct<<endl;
    
    return 0;
}