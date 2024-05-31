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
        int p=0,c=0;
        int f=1;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x<p||y<c||x-p<y-c) f=0;
            if(x==p && y!=c) f=0;
            p=x,y=c;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}