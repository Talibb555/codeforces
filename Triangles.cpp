#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b;
        cin>>a>>b;
        long long width1=0,width2=0;
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            long long first=0;
            long long second=0;
            for(int j=0;j<k;j++){
                long long x;
                cin>>x;
                if(j==0) first=x;
                if(j==k-1) second=x;
            }
            if(i<=1) width1=max(width1,second-first);
            else width2=max(width2,second-first);
        }
        cout<<max(width1*b,width2*a)<<endl;
    }
    
    return 0;
}