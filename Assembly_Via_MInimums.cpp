#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int m=n*(n-1);
        m/=2;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        sort(b.begin(),b.end());
        vector<int> ans;
        int i=0;
        while (i<m)
        {
            ans.push_back(b[i]);
            n--;
            i+=n;
        }
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<(int)(1e9)<<endl;
    }
    
    return 0;
}