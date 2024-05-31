#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    // k--;
    int ans=a[k-1];
    if(k==0){
        // cout<<a[0]-1<<endl;
        // return 0;
        ans=a[0]-1;
    }
    if(ans<1){
        cout<<-1<<endl;
        return 0;
    }
    if(ans==a[k]) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}