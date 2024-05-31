#include <bits/stdc++.h>
using namespace std;
set<string> ans;
void solve(string s, int ind)
{
    if (ind == s.size())
    {
        // cout << s << endl;
        ans.insert(s);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {

        s[i] = toupper(s[i]);
        solve(s, i + 1);
        s[i] = tolower(s[i]);
        solve(s, i + 1);
    }
}

void solve1(string s, string ans, int ind){
    if(ind==s.length()){
        cout<<ans<<endl;
        return;
    }
    solve1(s,ans+s[ind],ind+1);
    if(s[ind]>='a' && s[ind]<='z') s[ind]=toupper(s[ind]);
    else if(s[ind]>='A' && s[ind]<='Z') s[ind]=tolower(s[ind]);
    else return;
    solve1(s,ans+s[ind],ind+1);
}

int main()
{
    string s = "a1b2";
    // solve(s, 0);
    // for(auto i:ans) cout<<i<<endl;
    solve1(s,"",0);
    return 0;
}