#include <bits/stdc++.h>
using namespace std;

bool f(int prev, int mid, int k){
    double x=((double)(mid))/((double)(prev));
    return x<=double(k/100.0);
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=1;i<n;i++){
            int lo=a[i];
            int hi=1e9;
            int now=a[i];
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(f(a[i-1],mid,k)){
                    now=mid;
                    hi=mid-1;
                }
                else lo=mid+1;
            }
            ans+=now-a[i];
            a[i]=now+a[i-1];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}