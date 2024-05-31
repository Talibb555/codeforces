#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1){sum+=a[i];a[i]=0;}
    }
    int res=0;
    int ans=0;
    for(int i=0;i<k;i++){
        res+=a[i];
    }
    ans=res;
    for(int i=k;i<n;i++){
        res+=a[i];
        res-=a[i-k];
        ans=max(ans,res);
    }
    cout<<sum+ans<<endl;
    return 0;
}