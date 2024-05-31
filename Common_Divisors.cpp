#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x=0;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        x=__gcd(a,x);
    }
    int ans=0;
    for(long long i=1;i*i<=x;i++){
        if(x%i==0){
            ans++;
            if(x/i!=i) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}