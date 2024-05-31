#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        // string s1="",s2=s.substr(2);
        // unordered_set<string> st;
        // st.insert(s1+s2);
        // int sz=s.size()-2;
        // for(int i=0;i<sz;i++){
        //     s1.push_back(s[i]);
        //     s2.erase(s2.begin());
        //     st.insert(s1+s2);
        // }
        // cout<<st.size()<<endl;
        int ans=0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i-1]!=s[i+1]) ans++;
        }
        cout<<ans+1<<endl;
    }
    
    return 0;
}