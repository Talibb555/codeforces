#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<set<int>> v(n);
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            for(int j=0;j<x;j++){
                int a;cin>>a;
                v[i].insert(a);
                st.insert(a);
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            int ct=0;
            for(auto x:v[i]){
                bool f=0;
                for(int j=0;j<n;j++){
                    if(i==j) continue;
                    if(v[j].count(x)) {f=0;break;}
                    else f=1;
                }
                if(f) ct++;
            }
            int temp=st.size()-ct;
            if(ct!=0) ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}