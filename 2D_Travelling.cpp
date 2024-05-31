#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while(t--){
        long long n,k,a,b;cin>>n>>k>>a>>b;
        vector<long long> x(n+1), y(n+1);
        for(long long i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        long long ans=llabs(x[a]-x[b])+llabs(y[a]-y[b]);
        long long min_dis_from_major_to_a=LLONG_MAX/2;
        long long min_dis_from_major_to_b=LLONG_MAX/2;

        for(long long i=1;i<=k;i++){
            min_dis_from_major_to_a = min(min_dis_from_major_to_a,llabs(x[a]-x[i])+llabs(y[a]-y[i]));
            min_dis_from_major_to_b = min(min_dis_from_major_to_b,llabs(x[b]-x[i])+llabs(y[b]-y[i]));
        }

        ans=min(ans,min_dis_from_major_to_a+min_dis_from_major_to_b);
        cout<<ans<<endl;
    }
    return 0;
}