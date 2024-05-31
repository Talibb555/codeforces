#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    int r[11]={0}, c[11]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        for (int j = 0; j < m; j++)
        {
            if (s[i]=='S')
            {
                r[i]=1;
                c[j]=1;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<r[i]<<" ";
        for (int j = 0; j < m; j++)
        {
            cout<<c[j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}