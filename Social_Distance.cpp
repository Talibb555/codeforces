#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ct=0;
        bool one=false;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') ct++;
            else{
                if(one) ans+=(ct-k)/(k+1);
                else ans+=(ct)/(k+1);
                ct=0;
                one=true;
            }
        }
        if(one) ans+=(ct)/(k+1);
        else ans+=(ct-1)/(k+1)+1; 
        cout<<ans<<endl;
    }
    
    return 0;
}