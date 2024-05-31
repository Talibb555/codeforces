#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        // int f=0;
        int ans=n;
        if(n<=k) cout<<1<<endl;
        else{
            for(int i=2;i*i<=n && i<=k;i++){
                if(n%i==0){
                    if(i<=k) ans=min(ans,n/i);
                    if(n/i<=k) ans=min(ans,i);
                }
            }
            cout<<ans<<endl;
        }
        
    }
    
    return 0;
}