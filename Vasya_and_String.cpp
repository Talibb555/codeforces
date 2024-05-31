#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int i=0,j=0;
    int a=0,b=0;
    int ans=0;
    while(j<n){
        if(s[j]=='b') b++;
        while(b>k){
            if(s[i]=='b') b--;
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    j=0,i=0;
    while(j<n){
        if(s[j]=='a') a++;
        while(a>k){
            if(s[i]=='a') a--;
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}