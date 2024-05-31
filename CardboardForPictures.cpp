#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long> &v, long long c, long long mid){
    long long area = 0;
    for(auto i:v){
        area+=((2*1LL*mid+i)*(2*1LL*mid+i));
        if(area>c) break;
    }
    return area;
}

int main()
{
    long long t;cin>>t;
    while (t--)
    {
        long long n,c;cin>>n>>c;
        vector<long long> s(n);
        for(long long i=0;i<n;i++) cin>>s[i];

        long long ans=-1;
        long long lo=1, hi=1e9;    

        while (lo<=hi)  
        {
            long long mid = lo+(hi-lo)/2;
            long long area = f(s,c,mid);
            if(area<c) lo=mid+1;
            else if(area>c) hi=mid-1;
            else {ans=mid;break;}
        }
        cout<<ans<<endl;
    }
       
    return 0;
}