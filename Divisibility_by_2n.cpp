#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        int ct=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            while(a[i]%2==0) ct++,a[i]/=2;
        }
        if(ct>=n) {cout<<0<<endl;continue;}

        vector<int> v;
        for(int i=1;i<=n;i++){
            int x=i;
            int ct=0;
            while(x%2==0) ct++,x/=2;
            v.push_back(ct);
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0;i<v.size();i++){
            ct+=v[i];
            ans++;
            if(ct>=n) break;
        }
        if(ct>=n) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}