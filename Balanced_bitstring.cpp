#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;

        bool f=1;
        for(int i=0;i<k;i++){
            char temp=s[i];
            int x=i+k;
            while (x<n)
            {
                if(temp=='0' && s[x]=='1'){
                    f=0;break;
                }
                else if(temp=='1' && s[x]=='0'){
                    f=0;break;
                }
                else if(temp=='?' && s[x]!='?') temp=s[x];
                x+=k;
            }
            if(f==0) break;
            s[i]=temp;
        }

        if(f==0) {cout<<"NO"<<endl;}
        else{
            int one=0,zero=0,m=0;
            for(int i=0;i<k;i++){
                if(s[i]=='0') zero++;
                else if(s[i]=='1') one++;
                else m++;
            }
            if(one>k/2 || zero>k/2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}