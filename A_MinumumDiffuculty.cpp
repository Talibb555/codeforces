#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin>>a[0];
    int d[n-1];
    int s=0, ans=1000;
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        d[i]=a[i]-a[i-1];
        s=max(d[i],s);
    }
    for (int i = 2; i < n; i++)
    {
        ans=max(min(s,d[i]+d[i-1]),ans);
    }
    cout<<ans<<endl;

    return 0;
}