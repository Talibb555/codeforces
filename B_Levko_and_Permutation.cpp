#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    if(k==n) {
        cout<<-1<<endl;
        return 0;
    }
    if(k==n-1){
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<" ";
        }
        return 0;
    }
    int j=0;
    if(n%2==0){
        for (int i = 1; i <= n; i++,j++)
        {
            if(i&1) a[j]=i+1;
            else a[j]=i-1;
        }
        if(k&1){
            swap(a[0],a[1]);
            k--;
        }
        for (int i = 2; i < n; i+=2)
        {
            if (k)
            {
                swap(a[i],a[i+1]);
                k=k-2;
            }
            else break;
        }
        
    }
    else
    {
        a[0]=1;
        j=1;
        for (int i = 2; i <= n; i++,j++)
        {
            if(i&1) a[j]=i-1;
            else a[j]=i+1;
        }
        if(k&1){
            swap(a[0],a[1]);
            swap(a[1],a[2]);
            k--;
        }
        for (int i = 3; i < n; i+=2)
        {
            if (k)
            {
                swap(a[i],a[i+1]);
                k=k-2;
            }
            else break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}