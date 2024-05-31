#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int i=0;
        int j=s.size()-1;
        bool f=1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                a--;
            else if (s[i] == '1')
                b--;
        }
        while (i<=j)
        {
            if(i==j && s[i]=='?'){
                if(a>0){
                    s[i]='0';
                    a--;
                }
                else if(b>0){
                    s[i]='1';
                    b--;
                }
                else{
                    f=0;
                    break;
                }
            }
            if(s[i]!='?' && s[j]!='?'){
                if(s[i]!=s[j]){
                    f=0;
                    break;
                }
            }
            else if(s[i]=='?' && s[j]=='?'){
                if(a<=b && b>1){
                    s[i]='1';
                    s[j]='1';
                    b-=2;
                }
                else if(a>b && a>1) {
                    s[i]='0';
                    s[j]='0';
                    a-=2;
                }
                else{
                    f=0;
                    break;
                }
            }
            else if(s[i]=='?'){
                if(s[j]=='1' && b>0){
                    b--;
                    s[i]='1';
                }
                else if(s[j]=='0' && a>0){
                    a--;
                    s[i]='0';
                }
            }
            else if(s[j]=='?'){
                if(s[i]=='1' && b>0){
                    b--;
                    s[j]='1';
                }
                else if(s[i]=='0' && a>0){
                    a--;
                    s[j]='0';
                }
            }
            if(a<0 || b<0){ f=0;break;}
            i++;j--;
        }
        if(f) cout<<s<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}