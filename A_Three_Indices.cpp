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
        int flag=0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i < n-1; i++)
        {
            if (a[i-1]<a[i] && a[i]>a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}