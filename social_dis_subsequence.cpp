#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        a[0]=0;
        for(int i=1;i<=n;i++) cin>>a[i];

        vector<int> ans;
        int x=1,y=n;
         for (int i=1;i<=n;i++)
        {
            if (i==1 || i==n || (a[i-1]<a[i])!=(a[i]<a[i+1]))
            ans.push_back(a[i]);
        }
        cout<<ans.size()<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}