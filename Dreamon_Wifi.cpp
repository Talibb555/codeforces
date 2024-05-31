#include <bits/stdc++.h>
using namespace std;

double rec(string &s, int ind, int target, int pos){
    if(ind==s.size()){
        return pos==target;
    }
    double ans=0;
    if(s[ind]=='+') ans+=rec(s,ind+1,target,pos+1);
    if(s[ind]=='-') ans+=rec(s,ind+1,target,pos-1);
    if(s[ind]=='?') ans+=0.5*rec(s,ind+1,target,pos+1)+0.5*rec(s,ind+1,target,pos-1);
    return ans;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int target=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]=='+') target+=1;
        else target+=-1;
    }
    double x=rec(s2,0,target,0);
    // x=(double)x;
    // if(x==0) cout<<x<<endl;
    // else cout<<(1/x)<<endl;
    cout<<x;
    
    return 0;
}