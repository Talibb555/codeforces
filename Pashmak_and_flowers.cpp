#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long mx=INT_MIN;
    long long mn=INT_MAX;
    long long mxct=0;
    long long mnct=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>mx){
            mxct=1;
            mx=a;
        }
        else if(a==mx) mxct++;
        if(a<mn){
            mnct=1;
            mn=a;
        }
        else if(a==mn) mnct++;
    }
    if(mn==mx) cout<<mx-mn<<" "<<n*(n-1)/2<<endl;
    else cout<<mx-mn<<" "<<mxct*mnct<<endl;
    return 0;
}