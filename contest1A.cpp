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
        // vector<pair<int,int>> v(n);
        // int mx=INT_MIN;
        long long sum=0;
        // int sum1=0;
        // for (int i = 0; i < n; i++)
        // {
        //     cin>>v[i].first>>v[i].second;
        //     if(v[i].first<v[i].second) swap(v[i].first,v[i].second);
        //     // int a,b;
        //     // cin>>a>>b;
        //     // sum+=min(a,b);
        //     // mx=max({v[i].first,mx});
        //     sum+=v[i].first+v[i].second;
        //     // sum+=v[i].second;
        //     // sum1+=v[i].first;
        // }
        // // cout<<mx<<endl;
        // // cout<<sum1<<" "<<sum<<endl;
        // // cout<<2*(sum+mx)<<endl;
        // sort(v.begin(),v.end());
        // // // swap(v[n-1].first,v[n-1].second);
        // // int a=0;
        // // int b=0;
        // // cout<<(2*sum)-2*(sum1-mx)<<endl;
        // for(auto i:v){
        //     // cout<<i.first<<" "<<i.second<<endl;
        // //     // a+=i.second;
        // //     // b+=i.first;
        // //   
        // }
        // for (int i = 0; i < n-1; i++)
        // {
        //     sum-=v[i].first;
        // }
        // cout<<2*(sum);
        // cout<<a<<endl;
        // cout<<v[n-1].first<<endl;
        // cout<<2*(a+v[n-1].first)<<endl;
        // else cout<<2*(b+v[n-1].second)<<endl;
        long long a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
            sum+=a[i]+b[i];
            // if(a[i]<b) swap(a[i],b);
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i]) swap(a[i],b[i]);
        }
        
        sort(a,a+n);
        for (int i = 0; i < n-1; i++)
        {
            sum-=a[i];
        }
        cout<<2*sum<<endl;
    }
    
    return 0;
}