#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&1) cout<<0<<endl;
    else cout<<(int)round(pow(2,n/2))<<endl;
    return 0;
}