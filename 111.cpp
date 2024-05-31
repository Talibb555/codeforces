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
        int f=0;
        while (n>0)
        {
            if(n%11==0 || n%111==0){
                f=1;
                break;
            }
            n=n-111;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}