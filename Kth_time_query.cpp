#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;cin>>n>>q;
    // vector<int> v(n);
    map<int,vector<int>> m;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        m[a].push_back(i);
    }
    while (q--)
    {
        int x,k;cin>>x>>k;
        if(m[x].size()>=k) cout<<m[x][k-1]<<endl;
        else cout<<-1<<endl;
    }
    

    return 0;
}