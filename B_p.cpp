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
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(j==0 || j==i-1) cout<<1<<" ";
                else cout<<0<<" ";
                if(j==i-1) cout<<endl;
            }
            // cout<<endl;
        }
        
    }
    
    return 0;
}