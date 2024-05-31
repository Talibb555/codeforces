#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        bool ans=true;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string s1=a.substr(0,m-1);
        string s2=b.substr(0,m-1);
        string s3=a.substr(m-1,n-m+1);
        // cout<<s1<<" "<<s2<<" "<<s3<<" "<<b[m-1];
        if(s1!=s2) ans=false;
        // // cout<<ans<<endl; 
        // // reverse(a.begin(),a.end());
        // // reverse(b.begin(),b.end());
        int flag=0;
        for (int i = 0; i < s3.length(); i++)
        {
            if (b[m-1]==s3[i])
            {
                flag=1;
            }
            
        }
        if(flag==1 && ans== true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}