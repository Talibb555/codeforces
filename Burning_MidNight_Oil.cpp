#include <bits/stdc++.h>
using namespace std;

bool f(int mid, int n, int k){
    int x=0;
    int lines=0;
    while(mid){
        lines+=mid;
        mid=mid/(k<<x);
    }
    return lines>=n;
}

int main()
{
    int n,k;cin>>n>>k;

    int lo=1,hi=n;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(f(mid,n,k)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans<<endl;

    return 0;
}