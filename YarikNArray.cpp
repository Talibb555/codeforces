#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        long long sum=a[0], ans=a[0], last=a[0]%2;

        for(int i=1;i<n;i++){
            if(sum<0 || last==abs(a[i]%2)) {sum=a[i];last=a[i]%2;}
            else {sum+=a[i];last=a[i]%2;}
            last=abs(last);
            // cout<<sum<<" ";
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}