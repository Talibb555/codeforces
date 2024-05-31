#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,c;cin>>n>>c;
        vector<int> v;    
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(1+i+x);
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            int cost = v[i];
            if(c>=cost) ans++;
            else break;
            c-=cost;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}