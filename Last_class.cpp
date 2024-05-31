#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        // int ans=1e9;
        // int a=-1,b=-1;
        // for (int i = 1; i <= n/2; i++)
        // {
        //     int lcm=(i*(n-i))/__gcd(i,n-i);
        //     if(lcm<ans){
        //         ans=lcm;
        //         a=i;
        //         b=n-i;
        //     }
        // }
        // cout<<a<<" "<<b<<endl;
        int x=-1;
        int f=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                f=1;
                x=n/i;
                break;
            }
        }
        if(f==0) cout<<1<<" "<<n-1<<endl;
        else cout<<x<<" "<<n-x<<endl;
    }
    
    return 0;
}