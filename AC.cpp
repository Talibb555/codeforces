#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    while(q--){
        int n,m;cin>>n>>m;
        vector<int> t(n),l(n),h(n);
        for(int i=0;i<n;i++){
            cin>>t[i]>>l[i]>>h[i];
        }
        int mx=m,mn=m;
        int last=0;
        bool ans=1;
        for (int i = 0; i < n; i++)
        {
            mx+=t[i]-last;
            mn-=t[i]-last;
            if(mn>h[i] || mx<l[i]){ans=0;break;}
            last=t[i];
            mx=min(mx,h[i]);
            mn=max(mn,l[i]);
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}