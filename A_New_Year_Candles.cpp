#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a;
    while (a>=b)
    {
        ans+=a/b;
        int r=a%b;
        a=(a-r)/b;
        // cout<<a<<" ";
        a+=r;
    }
    cout<<ans;
    
    return 0;
}