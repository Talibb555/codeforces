#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    vector<int> a(m),b(m);
    for(int i=0,j=0;i<n and j<m;i++){
        if(s[i]==t[j]){
            a[j]=i;
            j++;
        }
    }
    for(int i=n-1,j=m-1;j>=0 && i>=0;i--){
        if(s[i]==t[j]){
            b[j]=i;
            j--;
        }
    }
    int ans=0;
    for(int i=1;i<m;i++){
        ans=max(ans,b[i]-a[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}