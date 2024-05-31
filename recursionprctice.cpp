#include <bits/stdc++.h>
using namespace std;

void solve(string s, int k){
    if(k==0){
        // if(s.length()==k) cout<<s<<endl;
        cout<<s<<endl;
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        string s1;
        if(i==0) s1+=s+'0';
        if(i==1) s1+=s+'1';
        solve(s1,k-1);
        // s.pop_back();
        // s.push_back('0');
        // solve(s,k,i+1);
        // s.pop_back();
    }
    
}
void f(int n, int k, string &s){
    if(n==k){
        cout<<s<<endl;
        return;
    }
    if(s[n-1]=='0'){
        s[n]='1';
        f(n+1,k,s);
        s[n]='0';
        f(n+1,k,s);
    }
    if(s[n-1]=='1'){
        s[n]='0';
        f(n+1,k,s);
    }
}

int main()
{
    int k=3;
    // solve("",k);
    string s;
    s.append(k,'a');
    s[0]='0';
    f(1,k,s);
    // cout<<endl;
    s[0]='1';
    f(1,k,s);
    return 0;
}