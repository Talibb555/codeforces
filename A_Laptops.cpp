#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    // for(auto i: v){
    //     cout<<i.first<<" "<<i.second<<endl;
    //     quality.push_back(i.second);
    // }
    for (int i = 0; i < n-1; i++)
    {
        if(v[i].second>=v[i+1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}