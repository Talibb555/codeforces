#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double Pa=a/b, Pb=c/d;
    double ans=Pa/(1-(1-Pa)*(1-Pb));
    cout<<setprecision(12)<<fixed<<ans<<endl;
    return 0;
}