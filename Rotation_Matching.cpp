#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1),b(n+1), pos(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }
    for(int i=1;i<=n;i++) cin>>b[i];
    unordered_map<int,int> m;
    for(int i=1;i<=n;i++){
        int cur=pos[b[i]]-i;
        if(cur<0) cur+=n;
        m[cur]++;
    }
    int ans=0;
    for(auto i:m){
        ans=max(ans,i.second);
    }
    cout<<ans<<endl;
    return 0;
}