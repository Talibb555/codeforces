#include <bits/stdc++.h>
using namespace std;
const int n=1e6+3;
int main()
{
    string s;
    cin>>s;
    map<char,string> m;
    string ans="";
    int num=0;
    for (int i = 0; i < 8; i++)
    {
        m['>']="1000";
        m['<']="1001";
        m['+']="1010";
        m['-']="1011";
        m['.']="1100";
        m[',']="1101";
        m['[']="1110";
        m[']']="1111";
    }
    for (int i = 0; i < s.length(); i++)
    {
        ans+=m[s[i]];
    }
    // cout<<ans;
    reverse(ans.begin(),ans.end());
    // cout<<ans;
    long long multiple=1;
    for (int i = 0; i < ans.length(); i++)
    {
        
        if(ans[i]=='1'){
            num=(num%n+multiple)%n;
        }
        multiple=(multiple%n*2%n)%n;
    }
    cout<<num;
    
    
    return 0;
}