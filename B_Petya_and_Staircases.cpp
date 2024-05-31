#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int flag=0, ct=2, mx=INT_MIN;
    if(a[m-1]==n || a[0]==1){
        cout<<"NO"<<endl;
        return 0;
    }
    bool in=false;
    for (int i = 0; i < m-1; i++)
    {
        if(a[i+1]-a[i]==1){
            ct++;
            flag=1;
            in=true;
        }
        else flag=0;
        if(flag==0 && in==true){
            mx=max(mx,ct);
            ct=2;
        }
    }
    mx=max(mx,ct);
    // cout<<mx;
    if(mx<=3) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}