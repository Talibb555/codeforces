#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,s;cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int i=0, j=0, sum=0, ans=0;
        while(j<n){
            sum+=a[j];
            while(sum>s){
                sum-=a[i];
                i++;
            }
            if(sum==s) ans=max(ans,j-i+1);
            j++;
        }
        if(ans==0) cout<<-1<<endl;
        else cout<<n-ans<<endl;
    }
       
    return 0;
}