#include <bits/stdc++.h>
using namespace std;

int f(int &n, int &m){
    if(n+m<3 || n==0 || m==0) return 0;
    int teams=0;
    int x=min(n,m);
    int req=x*2;
    if(n==x){
        if(m>=req){ m=0;teams+=n;}
        else {
            teams+=m/2;
            m=m%2;
            n=n-m/2;
        }
    }
    else if(m==x){
        if(n>=req){ n=0;teams+=m;}
        else {
            teams+=n/2;
            n=n%2;
            m=m-n/2;
        }
    }
    return teams;
}

int main()
{
    int n, m;
    cin>>n>>m;
    int ans=0;
    while (n!=0 && m!=0 && n+m>=3)
    {
        ans+=f(n,m);
    }
    cout<<ans<<endl;

    return 0;
}