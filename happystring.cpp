#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void check(string s){
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1]) return;
    }
    ans.push_back(s);
}

void f(string s, string ans, int ind, int k){
    if(ans.length()==k){
        // cout<<ans<<endl;
        check(ans);
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(i>ind&&s[i]==s[i-1]) continue;
        string temp;
        temp=ans+s[i];
        f(s,temp,i,k);
    }
    
}

void f1(string s, string ans, int k){
    if(ans.length()==k){
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(ans.size()==0||ans.back()!=s[i]){
            f1(s,ans+s[i],k);
        }
    }
    
}

int main()
{
    string s="abc";
    f(s,"",0,3);
    // for(auto i:ans) cout<<i<<endl;
    f1(s,"",3);
    return 0;
}