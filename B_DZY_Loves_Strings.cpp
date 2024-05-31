#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int hsh[26];
    int mx=INT_MIN;
    int ind,ans=0;
    for (int i = 0; i < 26; i++)
    {
        cin>>hsh[i];
        if(hsh[i]>mx){
            mx=hsh[i];
            ind=i;
        }
    }
    for (int i = 0; i < s.length()+k; i++)
    {
        if(i<s.length()){
            ans+=(i+1)*hsh[s[i]-'a'];
            // cout<<ans<<" ";
        }
        else
        {
            ans+=(i+1)*mx;
            // cout<<ans<<" ";
        }
        
    }
    cout<<ans;
    
    return 0;
}