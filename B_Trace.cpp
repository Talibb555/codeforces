#include <bits/stdc++.h>
using namespace std;

const double pi=3.14159265359;

int main()
{
    int n;
    cin>>n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=0;
    if(n&1){
        ans=a[0]*a[0];
        for (int i = 2; i < n; i++)
        {
            if(!(i&1)){
                ans+=a[i]*a[i]-a[i-1]*a[i-1];
            }
        }
        
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(i&1){
                ans+=a[i]*a[i]-a[i-1]*a[i-1];
            }
        }
        
    }
    cout<<fixed<<setprecision(10)<<pi*ans;
    
    return 0;
}