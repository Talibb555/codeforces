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
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<bool> vis(n,false);
        long long ans=0;
        for(int i=31;i>=0;i--){
            long long num=0;
            for(int j=0;j<n;j++){
                if((1<<i)&(a[j]) && !vis[j]){
                    num++;
                    vis[j]=1;
                }
            }
            ans+=(num*(num-1))/2;
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}