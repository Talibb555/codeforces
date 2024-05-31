#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int chess[n][n];
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         chess[i][j]=0;
        //     }
        //     // cout<<endl;
        // }
        for (int i = 0; i < m; i++)
        {
            int x,y;
            cin>>x>>y;
        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<chess[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        if(n<=m) cout<<"NO"<<endl;
        else if(n>m) cout<<"YES"<<endl;
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        
    }
    
    return 0;
}