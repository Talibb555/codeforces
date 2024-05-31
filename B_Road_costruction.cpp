#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    set<int> b;
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    for (int i = 0; i < 2*m; i++)
    {
       int x;
       cin>>x;
       b.insert(x);
    }
    int j=1,k;
    if(m==0) k=0;
    for (int i = 0; i < n; i++)
    {
        if(b.find(a[i])==b.end()){ k=a[i]; break;}
    }
    cout<<k<< " ";
    cout<<n-1<<endl;
    for (int i = 1; i <= n; i++)
    {
        if(i!=k){
            cout<<k<<" "<<i<<endl;
        }
    }
    
    return 0;
}