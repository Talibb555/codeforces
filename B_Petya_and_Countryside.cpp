#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int length=0, ct;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ct=1;
        k=i;
        for (int j = i-1; j >= 0; j--)
        {
            if(a[j]<=a[k]) ct++;
            else break;
            k--;
        }
        k=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<=a[k]) ct++;
            else break;
            k++;
        }
        length=max(length,ct);
        // cout<<ct<<" ";
        
    }
    cout<<length<<endl;
    
    return 0;
}