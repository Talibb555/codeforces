#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    long long time=a[0]-1;
    for (int i = 1; i < m; i++)
    {
        if (a[i-1]>a[i])
        {
            time+=n-a[i-1]+a[i];
        }
        else
        {
            time+=a[i]-a[i-1];
        }
        
    }
    cout<<time<<endl;
    
    return 0;
}   