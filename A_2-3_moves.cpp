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
        int a, b, c, d;
        int mn=INT_MAX;
        if(n%3==0){
            // cout<<n/3<<endl;
            a=n/3;
            mn=min(mn,a);
        }
        if(n%2==0){
            // cout<<n/2<<endl;
            b=n/2;
            mn=min(mn,b);
        }
        if(n%3!=0)
        {
            if((n%3)%2==0){
                // cout<<n/3+(n%3)/2;
                c=n/3+(n%3)/2;
                mn=min(mn,c);
            }
            else{
                // cout<<n/3+2<<endl;
                d=n/3+2;
                mn=min(mn,d);
            }
        }
        // cout<<min(a,min(b,min(c,d)))<<" ";
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
        cout<<mn<<endl;
        // else if (n%2==0)
        // {
        //     cout<<n/2<<endl;
        // }
        // else if(n%5==0){
        //     cout<<n/5*2<<endl;
        // }
        // else if(n%3==1){
        //     cout<<n/3+2<<endl;
        // }
        // else if(n%5==1){
        //     cout<<n/5*2+2<<endl;
        // }
        // else if(n%3==1){
        //     cout<<n/3+2<<endl;
        // }
    }
    
    return 0;
}