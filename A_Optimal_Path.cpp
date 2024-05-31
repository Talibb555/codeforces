#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0;
        long long r=(m*(m+1))/2;
        long long c1=((n-1));
        long long c2=(n*m+m*2);
        long long c=(c1*c2)/2;
        cout<<r+c<<endl;
        
    }
    
    return 0;
}