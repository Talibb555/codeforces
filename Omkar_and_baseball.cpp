#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        bool f=1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]!=i+1) f=0;
            else if(f==0 and a[i]==i+1){
                ans++;
                f=1;
            }
        }
        if(!f) ans++;
        cout<<min(2,ans)<<endl;
    }
    
    return 0;
}