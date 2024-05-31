#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;

        vector<vector<int>> ct(k,vector<int>(26,0));

        for(int i=0;i<n;i++) ct[i%k][s[i]-'a']++;
        string t(k,'.');
        int i=0,j=k-1;
        while (i<=j)    
        {
            int mx=0,id=-1;
            for(int c=0;c<26;c++){
                int temp=ct[i][c]+ct[j][c];
                if(temp>mx){
                    mx=temp;
                    id=c;
                }
            }
            t[i]=t[j]=(id+'a');
            i++;j--;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i%k]) ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}