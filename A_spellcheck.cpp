#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int T=0,I=0,M=0,U=0,R=0;
        // for (int i = 0; i < s.length(); i++)
        // {
        //     // if(s[i]<97) s[i]=s[i]+32;
        //     // if(s[i]<97) s[i]=s[i]+32;
        //     // if(s[i]=='t') T++;
        //     // if(s[i]=='i') I++;
        //     // if(s[i]=='m') M++;
        //     // if(s[i]=='u') U++;
        //     // if(s[i]=='r') R++;
        // }
        for (int i = 0; i < s.length(); i++)
        {
            // if(s[i]<97) s[i]=s[i]+32;
            if(s[i]=='T') T++;
            if(s[i]=='i') I++;
            if(s[i]=='m') M++;
            if(s[i]=='u') U++;
            if(s[i]=='r') R++;
        }
        // cout<<s<<endl;
        if(T==1 && I==1 && M==1 && U==1 && R==1 && s.length()==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}