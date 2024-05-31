#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> m;
        for(int i=0;i<n;i++){
            if(a[i]%k) m[k-(a[i]%k)]++;
        }
        int f=1;
        long long ans=0;
        for(auto i:m){
            f=0;
            ans=max(ans,i.first+(i.second-1)*k);
        }
        if(f==0) ans++;
        cout<<ans<<endl;

    }
    return 0;
}