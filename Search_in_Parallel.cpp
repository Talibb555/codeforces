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
        int s1,s2;
        cin>>s1>>s2;
        vector<pair<int,int>> v(n);
        for(int i=0 ;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.rbegin(),v.rend());
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int cost1=s1*(a.size()+1);
            int cost2=s2*(b.size()+1);
            if(cost1<cost2) a.push_back(v[i].second);
            else b.push_back(v[i].second);
        }
        cout<<a.size()<<" ";
        for(auto i:a) cout<<i<<" ";
        cout<<endl;
        cout<<b.size()<<" ";
        for(auto i:b) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}