#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;

    int ind=0,ans=0;
    while(ind<s1.size()){
        if(s1[ind]==s2[ind]){
            ind+=1;
            continue;
        }
        if(s1[ind]!=s2[ind] && ind+1<s1.size() && s1[ind+1]!=s2[ind+1] && s1[ind]!=s1[ind+1]){
            ind+=2;
            ans+=1;
        }
        else{
            ans+=1;
            ind+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}