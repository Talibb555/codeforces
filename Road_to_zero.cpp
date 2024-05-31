#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        cout<<min((x+y)*a,abs(x-y)*a+min(x,y)*b)<<endl;
    }
    
    return 0;
}