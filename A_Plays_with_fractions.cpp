#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long n=__gcd(a,b);
        long long m=__gcd(c,d);
        a=a/n;
        b=b/n;
        c=c/m;
        d=d/m;
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(a==c && b==d) cout<<0<<endl;
        else if(a==0 && c==0) cout<<0<<endl;
        else if((a==0 && c!=0) || (a!=0 && c==0)) cout<<1<<endl;
        else if(a==c || b==d) cout<<1<<endl;
        else
        {
            long long x=a*d;
            long long y=c*b;
            if(x%y==0 || y%x==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        

    }
    
    return 0;
}