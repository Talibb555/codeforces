#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((b/(float)m)<float(a)){
        if(n%m==0) cout<<n/m*b;
        else cout<<n/m*b+min(b,(n%m)*a);
    }
    else cout<<n*a<<endl;
    return 0;
}