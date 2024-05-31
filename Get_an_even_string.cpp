#include <bits/stdc++.h>
using namespace std;

int dp[200000+3];

int rec(string&s, int ind){
    if(ind>=s.size()) return 0;
    if(dp[ind]!=-1) return dp[ind];
    if(ind+1<s.size() && s[ind]==s[ind+1]) return dp[ind] = rec(s,ind+2);
    int i;
    for(i=ind+1;i<s.size();i++){
        if(s[i]==s[ind]) break;
    }
    if(i==s.size()) return dp[ind] = 1+rec(s,ind+1);
    else{
        int del=1+rec(s,ind+1);
        int not_del=i-ind-1+rec(s,i+1);
        return dp[ind] = min(del,not_del);
    }
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<rec(s,0)<<endl;
    }
    
    return 0;
}