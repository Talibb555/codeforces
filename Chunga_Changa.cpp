#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,z;
    cin>>x>>y>>z;
    if((x+y)/z==(x/z+y/z)) cout<<(x+y)/z<<" "<<0<<endl;
    else cout<<(x+y)/z<<" "<<min(z-x%z,z-y%z)<<endl;
    return 0;
}