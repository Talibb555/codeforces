#include <bits/stdc++.h>
using namespace std;

// int factorial(int n){
//     int ans=1;
//     if(n==1) return 1;
//     return n*factorial(n-1);

// }

int main()
{
    // cout<<factorial(2);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for (int i = 0; i < n+1; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m+1; i++)
    {
        cin>>b[i];
    }
    int num,den;
    num=abs(a[0]);
    den=abs(b[0]);
    // cout<<num<<" "<<den<<endl;
    if(m<n )
    {
        if((a[0]>0 && b[0]>0) || (a[0]<0 && b[0]<0)) cout<<"Infinity"<<endl;
        else cout<<"-Infinity"<<endl;
    }
    if(n<m) cout<<"0/1"<<endl;
    if(n==m)
    {
        if((a[0]>0 && b[0]>0) || (a[0]<0 && b[0]<0)) cout<<num/__gcd(num,den)<<"/"<<den/__gcd(num,den)<<endl;
        else cout<<"-"<<num/__gcd(num,den)<<"/"<<den/__gcd(num,den)<<endl;
    }
    
    
    return 0;
}