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
        string a(n,'0'),b(n,'0');
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                a[i]='1';
                b[i]='0';
                for(int j=i+1;j<n;j++) b[j]=s[j];
                break;
            }
            else a[i]=b[i]='0'+(s[i]-'0')/2;
        }
        cout<<a<<endl<<b<<endl;
    }
    
    return 0;
}