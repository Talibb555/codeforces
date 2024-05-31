#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    string s=to_string(x);
    for(int i=0;i<s.size();i++){
        if(s[i]>='5' && i!=0) s[i]='9'-(s[i])+'0';
        if(i==0 && s[i]<'9' && s[i]>='5') s[i]='9'-(s[i])+'0';
    }
    cout<<(s)<<endl;
    return 0;
}