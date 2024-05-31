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

        reverse(a.begin(),a.end());

        int ans = 0, i=1;

        while (i<n)
        {
            if(a[i]==a[0]){
                i++;
                continue;
            }
            ans++;
            i*=2;
        }
        cout<<ans<<endl;
    }
   
    return 0;
}