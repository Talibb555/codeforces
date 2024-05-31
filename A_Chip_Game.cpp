#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if((x+y)&1) cout<<"Burenka"<<endl;
        else cout<<"Tonya"<<endl;
    }

    return 0;
}