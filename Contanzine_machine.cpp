#include <bits/stdc++.h>
using namespace std;

int M=(int)(1e9+7);
int dp[100000+10];
int rec(string &s, int ind){
    if(s.size()==ind) return 1;
    if(ind>s.size()) return 0;
    if(dp[ind]!=-1) return dp[ind];
    if(ind+1<s.size() && s[ind]=='u' && s[ind+1]=='u'){
        int take=rec(s,ind+2)%M;
        int not_take=rec(s,ind+1)%M;
        return dp[ind] = (take+not_take)%M;
    }
    else if(ind+1<s.size() && s[ind]=='n' && s[ind+1]=='n'){
        int take=rec(s,ind+2)%M;
        int not_take=rec(s,ind+1)%M;
        return dp[ind] = (take+not_take)%M;
    }
    return dp[ind] = rec(s,ind+1)%M;
}

int main()
{
    string s;
    cin>>s;
    int f=0;
    memset(dp,-1,sizeof(dp));
    for(auto i:s){
        if(i=='w' || i=='m') f=1;
    }
    if(f==1) cout<<0<<endl;
    else cout<<rec(s,0);
    return 0;
}