#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s,g;
        cin>>s>>g;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='B') s[i]='G';
        }
        for (int i = 0; i < g.length(); i++)
        {
            if(g[i]=='B') g[i]='G';
        }
        // cout<<s<<" "<<g<<endl;
        if(s==g) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}