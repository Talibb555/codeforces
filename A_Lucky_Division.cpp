#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[]={4,7,44,77,47,74,444,447,477,777,774,744};
    bool flag=false;
    for (int i = 0; i < 12; i++)
    {
        if (n%a[i]==0)
        {
            flag=true;
            break;
        }
        
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}