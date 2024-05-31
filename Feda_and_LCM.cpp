#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b){
    return a*b/__gcd(a,b);
}

int main()
{
    long long x;
    cin>>x;
    long long ans;
    for(long long i=1;i*i<=x;i++){
        if(x%i==0 && lcm(i,x/i)==x) ans=i;
    }
    cout<<ans<<" "<<x/ans<<endl;
    return 0;
}