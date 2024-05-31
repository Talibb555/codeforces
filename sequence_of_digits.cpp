#include <bits/stdc++.h>
using namespace std;

long long f(long long n){
    int mn=9,mx=0;
    while (n)
    {
        int x=n%10;
        mn=min(mn,x);
        mx=max(mx,x);
        n=n/10;
    }
    return mx*mn;
}

bool is_zero(long long n){
    while(n){
        if(n%10==0) return true;
        n/=10;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a, k;
        cin>>a>>k;
        long long ans=a;
        for(int i=0;i<k-1;i++){
            ans=ans+f(ans);
            if(is_zero(ans)) break;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}