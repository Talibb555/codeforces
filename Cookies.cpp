#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        long long mn=min(a,b);
        if(mn<m){ cout<<"No"<<endl;continue;}
        if(a+b<n+m){ cout<<"No"<<endl;continue;}
        cout<<"Yes"<<endl;
    }
    
    return 0;
}