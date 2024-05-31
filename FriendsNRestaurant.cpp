#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<pair<int,int> > v(n,make_pair(0,0));    
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v[i].second=x;
        }
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v[i].first=x;
        }
        vector<int> a(n);
        for(int i=0;i<n;i++) a[i]=v[i].first-v[i].second;
        sort(a.rbegin(),a.rend());
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            if(a[i]+a[j]>=0){
                i++;
                j--;
                ans++;
            } else{
                j--;
            }
        }
        cout<<ans<<endl;
    }
       
    return 0;
}