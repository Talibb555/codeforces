#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v[i]={x,y};
        }
        sort(v.begin(),v.end());
        string ans="";
        pair<int,int> cur={0,0};
        int f=1;
        for(int i=0;i<n;i++){
            int r=v[i].first-cur.first;
            int u=v[i].second-cur.second;
            if(r<0 || u<0){
                cout<<"NO"<<endl;
                f=0;
                break;
            }
            while (r--) ans+='R';
            while (u--) ans+='U';
            cur=v[i];
        }
        if(f) cout<<"YES"<<endl<<ans<<endl;
    }
    return 0;
}