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
        long long sum=0;
        vector<pair<int,int>> v(n);
        vector<long long> a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        sort(b.begin(),b.end());
        sum-=b[n-1];
        // b.erase(b.begin());
        // for (int i = 0; i < b.size(); i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        // int j=n;
        // while (n--)
        // {
        //     if(b[0]<b[b.size()-1]){
        //         sum+=a[a.size()-1];
        //         a[a.size()-2]+=b[b.size()-1];
        //         a.pop_back();
        //         b.pop_back();
        //     }
        //     else
        //     {
        //         sum+=a[0];
        //         a[1]+=b[0];
        //         a.erase(a.begin());
        //         b.erase(b.begin());
        //     }
        //     for (int i = 0; i < a.size(); i++)
        //     {
        //         cout<<a[i]<<" "<<b[i]<<endl;
        //     }
        //     cout<<endl;
        // }
        cout<<sum<<endl;
    }
    
    return 0;
}