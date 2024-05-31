#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],c[n];
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        c[i]=a[i];
        if((a[i]-k)>1) flag=1;
    }
    int b[n];
    sort(a,a+n);
    int t=0;
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i]-t+1;
        t=a[i];
        if(b[i]==0) b[i]=b[i-1];
    }
    int p=0,l=1;
    if(flag==1) cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < c[i]; j++)
            {
                while (p<c[i] && p<b[i])
                {
                    cout<<l<<" ";
                    p++;
                }
                l++;
                
            }
            l=1;
            cout<<endl;
        }
        
    }
    
    
    
    return 0;
}