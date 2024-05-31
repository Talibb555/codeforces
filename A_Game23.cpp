#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    bool ok=true;
    if (m%n==0)
    {
        n=m/n;
        while (n!=1)
        {
            if (n%2==0)
            {
                n/=2;
                ans++;
            }
            else if (n%3==0)
            {
                n/=3;
                ans++;
            }
            else
            {
                // cout<<-1;
                ok=false;
                break;
            }
        }
        
    }
    else ok=false;
    if(ok) cout<<ans<<endl;
    else cout<<-1<<endl;
    
    return 0;
}