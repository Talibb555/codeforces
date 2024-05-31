#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long ct=0,mx=0;
    for (int i = 2; i < n; i++)
    {
        if(a[i]==(a[i-1]+a[i-2])) ct++;
        else{
            mx=max(mx,ct);
            ct=0;
        }
    }
    mx=max(mx,ct);
    if(n<=2) cout<<n<<endl;
    else cout<<mx+2<<endl;
    
    return 0;
}