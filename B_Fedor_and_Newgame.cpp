#include <bits/stdc++.h>
using namespace std;

int diffsoldiers(int n1, int n2){
    return __builtin_popcount(n1^n2);
}

void printbinary(int num, int k){
    for (int i = k; i >=0; i--)
    {
        cout<<((num>>i)&(1));
    }
    cout<<endl;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    int ct=0;
    for (int i = 0; i < m+1; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        // printbinary(a[i]^a[m],n);
        if(diffsoldiers(a[i], a[m])<=k) ct++;
    }
    cout<<ct;
    
    return 0;
}