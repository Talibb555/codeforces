#include <bits/stdc++.h>
using namespace std;

int hsh[2001];

int main()
{
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int c[q],d[q];
    int a,b;
    for (int i = 0; i < p; i++)
    {
        cin>>a>>b;
        for (int j = a; j <=b; j++)
        {
            hsh[j]=1;
        }
        
    }
    int ans=0;
    for (int i = 0; i < q; i++)
    {
        cin>>c[i]>>d[i];
    }
    for (int i = l; i <=r; i++)
    {
        bool flag=true;
        for (int j = 0; j < q; j++)
        {
            for (int k = c[j]+i; k <= d[j]+i; k++)
            {
                if(hsh[k]==1){
                    flag=false;
                    break;
                }
            }
            
        }
        if(flag==false) ans++;
    }
    cout<<ans;
    
    return 0;
}