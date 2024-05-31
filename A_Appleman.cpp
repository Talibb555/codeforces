#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][n];
    int ct=0;
    bool ok=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cin>>a[i];
            if((i==j && a[i][j]=='o') || (j==n-i-1 && a[i][j]=='o')){
                // ok=true;
                ct++;
            }
            else
            {
                if (a[i][j]=='o')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                
            }
            
        }
        
    }
    if(ct==n || ct==n*2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if(i==j || j==n-i-1){
    //             cout<<1<<" ";
    //         }
            
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}