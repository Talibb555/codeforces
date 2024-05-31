#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int moves;
    int mn=(n+1)/2;
    int ans=((mn+m-1)/m)*m;
    if(ans>n) ans=-1;
    cout<<ans<<endl; 
    return 0;
}