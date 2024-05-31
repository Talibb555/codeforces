#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long c0=0,c1=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x==1) c1++;
            if(x==0) c0++;
        }
        cout<<(c1)*(1LL<<c0)<<endl;
    }
    

    return 0;
}