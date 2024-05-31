#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[k+1]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    // for(int i=0;i<=k;i++) cout<<a[i]<<endl;
    int ans=0,ct=0;
    for(int i=1;i<=k;i++){
        ans+=(a[i]/2)*2;
        ct+=(a[i]%2);
    }
    ans+=(ct+1)/2;
    cout<<ans<<endl;
    return 0;
}