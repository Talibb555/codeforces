#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(1002,-1);
        int ans=-1;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a[x]=i+1;
            if(x==1) ans=2*(i+1);
        }

        for(int i=1;i<=1000;i++){
            for(int j=i+1;j<=1000;j++){
                if(a[i]!=-1 && a[j]!=-1 && gcd(i,j)==1) ans=max(ans,a[i]+a[j]);
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}