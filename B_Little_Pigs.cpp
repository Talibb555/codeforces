#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+2][m+2];
    for (int i = 0; i < n+2; i++)
    {
        for (int j = 0; j < m+2; j++)
        {
            if(i==0 || j==0 || i==n+1 || j==m+1) a[i][j]='.';
            else cin>>a[i][j];
        }
        
    }
    int ct=0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {  
            if(a[i][j]=='P'){
                if(a[i+1][j]=='W'  ){
                    a[i+1][j]='.';
                    ct++;
                }
                else if(a[i][j+1]=='W' ){
                    a[i][j+1]='.';
                    ct++;
                }
                else if(a[i-1][j]=='W' ){
                    a[i-1][j]='.';
                    ct++;
                }
                else if(a[i][j-1]=='W' ){
                    a[i][j-1]='.';
                    ct++;
                }

            }
        }
        
    }
    cout<<ct<<endl;
    // for (int i = 0; i < n+2; i++)
    // {
    //     for (int j = 0; j < m+2; j++)
    //     {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}