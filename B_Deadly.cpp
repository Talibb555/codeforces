#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        // int dis=abs(n-x)+abs(m-y);
        // if(dis>d) cout<<n+m-2<<endl;
        // else cout<<-1<<endl;
        // vector<pair<int,int>> v;
        int ct=0;
        if(x+d>=n && y+d>=m) ct++;
        if(x-d<=1 && y-d<=1) ct++;
        if(x+d>=n && x-d<=1) ct++;
        if(y+d>=m && y-d<=1) ct++;
        
        if(ct) cout<<-1<<endl;
        else cout<<n+m-2<<endl;
        
    }
    
    return 0;
}