#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    multiset<int,greater<int>> st;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        st.insert(a);
    }
    while (m--)
    {
        int x;cin>>x;
        auto ind=st.lower_bound(x);
        if(ind==st.end()) cout<<-1<<endl;
        else { cout<<*ind<<endl;st.erase(ind);}
        // else {cout<<*(--ind)<<endl;st.erase(--(ind));}
    }
    
    return 0;
}