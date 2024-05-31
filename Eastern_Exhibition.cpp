#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long x[n],y[n];
        for(int i=0;i<n;i++) cin>>x[i]>>y[i];
        sort(x,x+n);
        sort(y,y+n);
        if(n&1) cout<<1<<endl;
        else cout<<(x[n/2]-x[n/2-1]+1LL)*(y[n/2]-y[n/2-1]+1LL)<<endl;
    }
    
    return 0;
}