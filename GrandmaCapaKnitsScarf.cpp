#include <bits/stdc++.h>
using namespace std;

void f(int i, int j, int &ans, string &s, bool &ok, char &c){
    while(i<j){
        if(s[i]==s[j]){
            i++;j--;
            continue;
        }
        if(c=='$'){
            c=s[i];
            i++;
            ans++;
            continue;
        }
        if(c!=s[i] && c!=s[j]){
            ok=0;break;
        }
        if(c!=s[i] && c==s[j]){ans++; j--;}
        else if(c!=s[j] && c==s[i]){ans++; i++;}
    }    
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int i=0, j=n-1;
        char c='$';
        bool ok=1;
        int ans=0;
        // while(i<j){
        //     if(s[i]==s[j]){
        //         i++;j--;
        //         continue;
        //     }
        //     if(c=='$'){
        //         c=s[i];
        //         i++;
        //         ans++;
        //         continue;
        //     }
        //     if(c!=s[i] && c!=s[j]){
        //         ok=0;break;
        //     }
        //     if(c!=s[i] && c==s[j]){ans++; j--;}
        //     else if(c!=s[j] && c==s[i]){ans++; i++;}
        // }    
        f(0,n-1,ans,s,ok,c);
        int ans1=ans;
        if(!ok) ans1=INT_MAX;
        reverse(s.begin(),s.end());
        ans=0;
        ok=1;
        c='$';
        f(0,n-1,ans,s,ok,c);
        int ans2=ans;
        if(!ok) ans2=INT_MAX;

        // cout<<ok<<" ";
        if(ans1==INT_MAX && ans2==INT_MAX) cout<<-1<<endl;
        else cout<<min(ans1,ans2)<<endl;
    }
       
    return 0;
}