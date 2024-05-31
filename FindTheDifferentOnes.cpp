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

        vector<int> v(n,-1);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]) v[i]=i-1;
            else v[i]=v[i-1];
        }    

        int q;cin>>q;
        while (q--)
        {
            int l,r;cin>>l>>r;
            l--;r--;
            if(v[r]>=l) cout<<v[r]+1<<" "<<r+1<<endl;
            else cout<<-1<<" "<<-1<<endl;
        }
        cout<<endl;
    }
       
    return 0;
}