#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // float endcase=
    double mindis=2*max(a[0],l-a[n-1]);
    for (int i = 0; i < n-1; i++)
    {
        double x=a[i+1]-a[i];
        mindis=max(mindis,x);
    }
    // cout<<mindis;
    mindis=mindis/2.0;
    cout<<setprecision(10)<<fixed<<mindis;

    return 0;
}