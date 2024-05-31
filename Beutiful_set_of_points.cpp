#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int k=min(n,m);
    cout<<k+1<<endl;
    for(int i=0;i<=k;i++) cout<<i<<" "<<k-i<<endl;
    return 0;
}