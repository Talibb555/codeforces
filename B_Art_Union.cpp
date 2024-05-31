#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int hsh[n+1][m+1];
    int a[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin>>a[i][j];
    //     }
        
    // }
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i==0 || j==0) hsh[i][j]=0;
            // else
            // {
            //     hsh[i][j]=max(hsh[i-1][j],hsh[i][j-1])+a[i][j];
            // }
            
        }
        
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            int t;
            cin>>t;
            hsh[i][j]=max(hsh[i-1][j],hsh[i][j-1])+t;
        }
        
    }
    
    // for (int i = 0; i < n+1; i++)
    // {
    //     for (int j = 0; j < m+1; j++)
    //     {
    //         cout<<hsh[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (int i = 1; i < n+1; i++)
    {
        cout<<hsh[i][m]<<" ";
    }
    
    
    
    
    return 0;
}