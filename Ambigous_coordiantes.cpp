#include <bits/stdc++.h>
using namespace std;

bool check(string ans){
    if((ans[ans.size()-2]==',' && ans[ans.size()-1]==' ') ||ans[ans.size()-1]=='.') return false;
    int com=0,dot1=0,dot2=0;
    // if(ans[0]=='0' && (ans[1]!=',')) return false;
    // if(ans[0]=='0' && (ans[1]!='.')) return false;
    // if(ans[0]==0 && (ans[1]>='1' && ans[1]<='9')) return false;
    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]==',') com++;
        // if(ans[i]=='.') dot++;
        if(com==2 ) return false;
    }
    if(com==0 ) return false;
    int pos=ans.find(',');
    int sum1=0, sum2=0;
    string s1=ans.substr(0,pos),s2=ans.substr(pos+1);
    // cout<<s1<<" "<<s2<<endl;
    if(s1[0]=='0'){
        if(s1[1]>='0' && s1[1]<='9') return false;
    }
    if(s2[1]=='0'){
        if(s2[2]>='0' && s2[2]<='9') return false;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        
        if(s1[i]=='.') dot1++;
        else sum1+=s1[i]-'0';
        // if(s1[i]=='0' && s1[i+1]=='0') return false;
        // if(s1[i]=='.' && s1[i+1]=='0') return false;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        
        if(s2[i]=='.') dot2++;
        else if(s2[i]!='.' && s2[i]!=' ') sum2+=s2[i]-'0';
        // if(s2[i]=='0' && s2[i+1]=='0') return false;
        // if(s2[i]=='.' && s2[i+1]=='0') return false;
    }
    if(dot1>1 || dot2>1) return false;
    if(dot1!=0 && sum1==0) return false;
    if(dot2!=0 && sum2==0) return false;
    return true;
}
vector<string> res;
void f(string &s, int ind, string ans)
{
    if (ind == s.length())
    {
        // cout << ans << endl;
        if(check(ans)) res.push_back(ans);
        return;
    }
    // cout<<ind<<" "<<endl;
    ans.push_back(s[ind]);
    // if (ind != s.length() - 1)
    // {
        f(s, ind + 1, ans + ", ");
        f(s, ind + 1, ans + ".");
        f(s,ind+1,ans);
    // }
}

int main()
{
    // string s = "123";
    string s = "0123";
    // string s = "00011";
    f(s, 0, "");
    for(auto i:res) cout<<i<<endl;
    return 0;
}