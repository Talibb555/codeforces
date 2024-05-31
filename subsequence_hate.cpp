#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int count0=0;
        int count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        int pf0[n+1]={0};
        int pf1[n+1]={0};
        if(s[0]=='0'){
            pf0[0]=1;
            pf1[0]=0;
        }
        else {
            pf0[0]=0;
            pf1[0]=1;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                pf0[i]=pf0[i-1]+1;
                pf1[i]=pf1[i-1];
            }
            else{
                pf0[i]=pf0[i-1];
                pf1[i]=pf1[i-1]+1;
            }
        }
        int ans=INT_MAX;   
        for(int i=0;i<n;i++){
            ans=min(ans,pf1[i]+count0-pf0[i]);
        }
        for(int i=0;i<n;i++){
            ans=min(ans,pf0[i]+count1-pf1[i]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}