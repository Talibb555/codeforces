#include <bits/stdc++.h>
using namespace std;
int mod=1000000007;
int main()
{
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    int sum=0;
    if(n%3==0){
        if(n/3&1) cout<<((y-x)%mod + mod)%mod;
        else cout<<(-(y-x)%mod + mod)%mod;
    }
    if(n%3==1){
        if(n/3&1) cout<<((-x)%mod + mod)%mod;
        else cout<<(-(-x)%mod + mod)%mod;
    }
    if(n%3==2){
        if(n/3&1) cout<<(((-y)%mod + mod)%mod);
        else cout<<(((y)%mod + mod)%mod);
    }
    
    return 0;
}