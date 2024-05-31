#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,g;
        cin>>s>>g;
        int nn=s.size();
        int mm=g.size();
        int ans=0;
        if(nn!=mm){
            string t;
            if(nn>mm) t=s;
            else t=g;
            int temp=0;
            for(int i=abs(nn-mm)-1;i>=0;i--){
                temp+=t[i]-'0';
            }
            ans+=max(temp,9*(abs(nn-mm)-1)+t[0]-'0');
            ans+=9*min(nn,mm);
            // ans+=9*abs(n-m)-1;
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<nn;i++){
                if(s[i]==g[i]) continue;
                else{
                    ans+=abs(s[i]-'0'-(g[i]-'0'));
                    ans+=9*(nn-1-i);
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}