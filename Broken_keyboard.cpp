#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_set<char> st;
    for(int i=0;i<k;i++){
        char c;
        cin>>c;
        st.insert(c);
    }
    long long ct=0;
    long long ans=0;
    for(int i=0;i<s.size();i++){
        if(st.count(s[i])) ct++;
        else{
            ans+=ct*(ct+1)/2;
            ct=0;
        }
    }
    if(ct) ans+=ct*(ct+1)/2;
    cout<<ans<<endl;
    return 0;
}