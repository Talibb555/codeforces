#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int pos=s.find(".");
    string intgr=s.substr(0,pos);
    string frac;
    if(pos>0) frac=s.substr(pos+1,s.length());
    reverse(intgr.begin(),intgr.end());
    string ans1,ans2;
    for (int i = 0; i < intgr.length(); i++)
    {
        if(i%3==0) ans1.push_back(',');
        if(intgr[i]!='-') ans1.push_back(intgr[i]);
    }
    // cout<<intgr<<" "<<frac<<endl;
    reverse(ans1.begin(),ans1.end());
    ans1.pop_back();
    if(frac.length()==0){
        ans2.push_back('0');
        ans2.push_back('0');
    }
    if(frac.length()==1){
        ans2.push_back(frac[0]);
        ans2.push_back('0');
    }
    if(frac.length()>=2){
        ans2.push_back(frac[0]);
        ans2.push_back(frac[1]);
    }
    if(ans1[0]==',') ans1.erase(0,1);
    if(s[0]=='-') cout<<"($"<<ans1<<"."<<ans2<<")"<<endl;
    else cout<<"$"<<ans1<<"."<<ans2<<endl;
    return 0;
}