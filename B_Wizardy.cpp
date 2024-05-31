#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,l;
    cin>>n>>d>>l;
    int a[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        a[i]=1;
    }
    
    int oddsum=n/2;
    int evensum=n-oddsum;
    
    if(d>0) i=0;
    else if(d<0) i=1;
    else i=n-2;
    for (; i < n; i+=2)
    {
        if(-oddsum+evensum==d) break;
        while (-oddsum+evensum!=d && a[i]<l)
        {
            a[i]++;
            if(i&1) oddsum++;
            else evensum++;
        }
        
    }
    if(-oddsum+evensum!=d){
        cout<<-1;
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}