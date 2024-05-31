#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,m,k;cin>>n>>m>>k;
        int x,y;cin>>x>>y;
        bool f=0;
        while(k--){
            int x1,y1;cin>>x1>>y1;
            if((abs(x1-x)+abs(y1-y))%2==0) f=1;
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}