#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    a=abs(a);
    b=abs(b);
    if(a+b>s) cout<<"No"<<endl;
    else ((a+b-s)%2==0)?cout<<"Yes":cout<<"No"<<endl;
    return 0;
}