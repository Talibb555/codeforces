#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,g;
    cin>>s>>g;
    int hsh1[26]={0};
    int hsh2[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        hsh1[s[i]-'a']++;
    }
    for (int i = 0; i < g.length(); i++)
    {
        hsh2[g[i]-'a']++;
        if(hsh1[g[i]-'a']<=0){
            cout<<-1;
            return 0;
        }
    }
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        // if(hsh1[i]>0 && hsh2[i]>0) cout<<abs(hsh1[i]-hsh2[i])<<" ";
        // cout<<min(hsh1[i],hsh2[i])<<" ";
        ans+=min(hsh1[i],hsh2[i]);
    }
    if(ans==0) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}