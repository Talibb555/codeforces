#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int c,sum;
        cin>>c>>sum;
        if(sum<=c) cout<<sum<<endl;
        else{
            cout<<(sum%c)*(1+sum/c)*(1+sum/c)+(c-sum%c)*(sum/c)*(sum/c)<<endl;
        }
    }
    
    return 0;
}