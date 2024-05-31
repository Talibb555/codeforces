#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int hsh[n+1]={0};
    for(int i=0;i<n;i++) {
        cin>>a[i];
        // if(a[i]>=1 && a[i]<=n) hsh[a[i]]=1;
    }
    sort(a,a+n);
    // int x=1;
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(i+1-a[i]);
    }
    cout<<ans<<endl;

    return 0;
}