#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long n;cin>>n;
        string s;cin>>s;

        long long ct=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) ct+=i;
        }
        cout<<n*(n+1)/2-ct<<endl;
    }
    
    return 0;
}