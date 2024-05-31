#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        long long sum=0;
        vector<long long> v;
        for(long long i=0;i<n;i++){
            long long a;cin>>a;
            v.push_back(a);
            if(a&1) sum++;
        }
        long long k=2;
        if(sum==n || sum==0){
            while (1)
            {
                set<long long> st;
                for(auto i:v) st.insert(i%k);
                if(st.size()==2) break;
                k*=2;
            }
            cout<<k<<endl;
        }
        else cout<<2<<endl;
    }
    
    return 0;
}