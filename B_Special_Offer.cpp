#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p,d;
    cin>>p>>d;
    long long n=p-d;
    long long max=INT_MIN;
    long long ans=-1;
    for (long long i = n; i <= p; i++)
    {
        long long x=i;
        long long ct=0;
        while (x>0)
        {
            long long num;
            num=x%10;
            x/=10;
            if(num==9){
                ct++;
            }
            else break;
        }
        // cout<<ct<<" "<<i<<endl;
        if(ct>max){
            ans=i;
            max=ct;
        }
        if(ct==max)ans=i;
    }
    cout<<ans<<endl;
    
    return 0;
}