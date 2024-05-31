#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> v(n+1,0);
    v[1]=2;
    long long x=2;
    for(int i=2;i<=n;i++){
        v[i]=x*2+v[i-1];
        x=x*2;
    }
    cout<<v[n]<<endl;
    return 0;
}