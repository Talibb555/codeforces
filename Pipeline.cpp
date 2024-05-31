#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    
    long long lo=0;
    long long hi=k-1;
    long long ans=-1;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if((2*k-mid-1)*(mid)/2 >= n-1){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}