#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int > a(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    int mnind;
    int mxind;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            mxind=i;
        }
        if(a[i]<=mn){
            mn=a[i];
            mnind=i;
        }
    }
    // cout<<mnind<<" "<<mxind;
    if(mnind<mxind){
        cout<<abs(mxind-0)+abs(n-1-mnind)-1;
    }
    else cout<<abs(mxind-0)+abs(n-1-mnind);
    
    return 0;
}