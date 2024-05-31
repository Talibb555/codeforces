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
        string lid;
        cin>>lid;
        int ct=0;
        // for (int i = 0; i < n; i++)
        // {
        //     if(lid[i]=='1') ct++;
        // }
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int mn=INT_MAX;
        int sum=0;
        bool f=true;
        if(lid[0]=='0') f=false;
        for (int i = 0; i < n; i++)
        {
            // if(lid[i]=='0' && f==true){
            //     f=false;
            // }
            if(lid[i]!='0' && f==false){
                // f=true;
                mn=min(mn,a[i]);
                // ct--;
            }
            else {
                sum+=mn;
                mn=INT_MAX;
                f=false;
            }
        }
        cout<<sum<<endl;
        
        // vector<pair<int,int>> v(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin>>v[i].first;
        //     v[i].second=i;
        // }
        // sort(v.rbegin(),v.rend());
        // // for(auto i:v){
        // //     cout<<i.first<<" "<<i.second<<endl;
        // // }
        // int i=0;
        // int sum=0;
        // // cout<<lid[v[0].second];
        // while (ct)
        // {
        //     if( lid[v[i].second]=='1'){
        //         sum+=v[i].first;
        //         ct--;
        //     }
        //     else if(lid[v[i].second+1]=='1' && v[i].second+1<n){
        //         lid[v[i].second+1]='0';
        //         lid[v[i].second]='1';
        //         sum+=v[i].first;
        //         ct--;
        //     }
        //     i++;
        // }
        // cout<<sum<<endl;
        
    }
    
    return 0;
}