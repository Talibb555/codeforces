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
        string s;
        cin>>s;
        int x=0;
        int y=n-1;
        while(x<n && s[x]=='0') x++;
        while(y>=0 && s[y]=='1') y--;
        if(x>y) cout<<s<<endl;
        else{
            string s1="";
            for(int i=0;i<x;i++) s1+='0';
            s1+='0';
            for(int i=y;i<n-1;i++) s1+='1';
            cout<<s1<<endl;
        } 
    }
    
    return 0;
}