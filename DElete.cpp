#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int> m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
            m[x]++;
        }
        long long sum=accumulate(a.begin(),a.end(),0LL);
        if((2*sum)%n!=0){
            cout<<0<<endl;
            continue;
        }
        long long req=(2*sum)/n;
        long long ans=0;
        for(int i=0;i<n;i++){
            int a1=a[i];
            int a2=req-a1;
            if(m.count(a2)) ans+=m[a2];
            if(a1==a2) ans-=1;
        }
        cout<<ans/2<<endl;
    }
    
    
    return 0;
}