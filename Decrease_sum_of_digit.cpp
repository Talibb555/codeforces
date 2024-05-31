#include <bits/stdc++.h>
using namespace std;

long long sum(long long n){
    long long ans=0;
    while (n)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        long long n,s;cin>>n>>s;
        long long pw=1;
        long long ans=0;
        if(sum(n)<=s) {cout<<0<<endl;continue;}
        for(int i=0;i<18;i++){
            int lastdigit=(n/pw)%10;
            long long add=pw*((10-lastdigit)%10);
            n+=add;
            ans+=add;
            if(sum(n)<=s) break;
            pw*=10;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}