#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int x;cin>>x;

        int n=s.size();
        string w(n,'1');
        bool f=1;

        for(int i=0;i<n;i++){
            if(x+i<n && s[i]=='0') w[i+x]=s[i];
            if(i-x>=0 && s[i]=='0') w[i-x]=s[i];
        }
        bool ok=1;
        for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            bool t = false ;
            if(i-x >= 0 && w[i-x]=='1') t = true ;
            if(i+x < n && w[i+x] == '1') t = true ;
            if(t == false){
                ok = false ;
                break ;
            }
        }
    }

    cout << (ok?w:"-1") << endl ;
    }
    
    return 0;
}