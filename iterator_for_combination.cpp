#include <bits/stdc++.h>
using namespace std;

void f(string s,int ind, string ans, int k){
    if(ind==s.length()) {
        if(k==0) cout<<ans<<endl;
        return;
    }
    ans.push_back(s[ind]);
    f(s,ind+1,ans,k--);
    ans.pop_back();
    f(s,ind+1,ans,k--);
}

int main()
{
    string s="chp";
    string ans;
    int k=1;
    f(s,0,ans,s.length()-k);
    return 0;
}