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
        if(n>14 && n%14>0 && n%14<=6) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}