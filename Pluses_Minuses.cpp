#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;

        long long ans=0,ct=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+') ct++;
            else ct--;
            if(ct<0) ans+=i+1,ct=0;
        }
        cout<<ans+s.size()<<endl;
    }
    
    return 0;
}