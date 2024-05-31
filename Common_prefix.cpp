#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s(200,'a');
        cout<<s<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(s[x]=='a') s[x]='b';
            else s[x]='a';
            cout<<s<<endl;
        }
        
    }
    
    return 0;
}