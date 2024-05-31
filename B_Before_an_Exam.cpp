#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin>>d;
    int time;
    cin>>time;
    vector<pair<int,int>> v(d);
    int mintime=0, maxtime=0;
    for (int i = 0; i < d; i++)
    {
        cin>>v[i].first>>v[i].second;
        mintime+=v[i].first;
        maxtime+=v[i].second;
    }
    if(time<=maxtime && time>=mintime){
        cout<<"YES"<<endl;
        time-=mintime;
        for (int i = 0; i < d; i++)
        {
            cout<<v[i].first+min(time,v[i].second-v[i].first)<<" ";
            time-=min(time,v[i].second-v[i].first);
        }
        
        
    }
    else cout<<"NO"<<endl;
    
    return 0;
}