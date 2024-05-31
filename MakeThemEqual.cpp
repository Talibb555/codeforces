#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        bool ok=1;
        int last = -1;
        for(int i=0;i<s.size();i++){
            if(s[i]==c) last = i;
            if(s[i]!=c) ok=0;
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
        // if(s.size()==1)
        if(c==s[s.size()-1]){
            cout<<1<<endl;
            cout<<n<<endl;
        }    
        else if(c==s[s.size()-2]){
            cout<<1<<endl;
            cout<<n-1<<endl;
        }
        else if(last >= n/2){
            cout<<1<<endl;
            cout<<last+1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
       
    return 0;
}