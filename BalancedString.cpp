#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        set<char> st;
        for(auto i:s) st.insert(i);
        int k=st.size();
        bool ans = 1;
        for(int i=k;i<s.size();i++){
            if(s[i]!=s[i-k]) ans=0;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}