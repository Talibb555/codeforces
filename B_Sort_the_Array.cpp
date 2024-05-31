#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int l,r=n-1;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(is_sorted(a,a+n)){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1] && flag==0){
            l=i;
            flag=1;
        }
        if(a[i]<a[i+1] && flag==1){
            r=i;

            break;
        }
    }
    // cout<<l<<" "<<r;
    reverse(a+l,a+r+1);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    if(is_sorted(a,a+n)){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else cout<<"no"<<endl;
    
    
    return 0;
}