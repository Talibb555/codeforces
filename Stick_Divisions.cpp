#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;cin>>x>>n;
    multiset<long long> st;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        st.insert(a);
    }
    long long ans=0;
    while (st.size()>1)
    {
        auto x=st.begin();
        st.erase(x);
        auto y=st.begin();
        st.erase(y);
        ans+=*x+*y;
        st.insert(*x+*y);
    }
    cout<<ans<<endl;
    
    return 0;
}