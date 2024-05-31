#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long n,q;cin>>n>>q;

        vector<long long> p,mx;
        p.push_back(0);
        for(int i=0;i<n;i++){
            long long x;cin>>x;
            p.push_back(x+p.back());
            if(mx.size()==0) {mx.push_back(x);}
            else {mx.push_back(max(x,mx.back()));}
        }
        while(q--){
            int k;cin>>k;
            auto ind=upper_bound(mx.begin(),mx.end(),k);
            if(ind!=mx.end()) cout<<p[ind-mx.begin()]<<" ";
            else cout<<p.back()<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}