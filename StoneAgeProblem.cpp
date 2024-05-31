#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;cin>>n>>q;
    map<long long,long long> m;
    vector<long long> a(n);
    long long sum=0;
    for(long long i=0;i<n;i++){
        long long x;cin>>x;
        sum+=x;
        // m[x]++;
        a[i]=x;
    }   
    long long last = -1;
    while(q--){
        long long t;cin>>t;
        if(t==1){
            long long i,x;cin>>i>>x;
            i--;
            if(last==-1){
                sum+=abs(a[i]-x);
                a[i]=x;
                cout<<sum<<endl;
            } else {
                long long t;
                if(m[i]==0) t=last;
                else t=m[i];
                if(x>=t) sum+=x-t;
                else sum-=t-x;
                cout<<sum<<endl;
                m[i]=x;
            }

        }else{
            long long x;cin>>x;
            cout<<x*n<<endl;
            sum=x*n;
            m.clear();
            last=x;
        }
    }
    return 0;
}