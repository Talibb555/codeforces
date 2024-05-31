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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<pair<int,int>> v;
        int ind=-1;
        for(int i=1;i<n;i++){
            if(a[0]!=a[i]){
                ind=i;
                v.push_back({1,ind+1});
            }
        }
        if(ind==-1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[0]) v.push_back({ind+1,i+1});
        }
        cout<<"YES"<<endl;
        for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}