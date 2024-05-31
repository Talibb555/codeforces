#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x_sum=0, y_sum=0, z_sum=0,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
    }
    // cout<<x_sum<<" "<<y_sum<<" "<<z_sum<<endl;
    if((x_sum==0)&&(y_sum==0)&&(z_sum==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}