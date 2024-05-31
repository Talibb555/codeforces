#include <bits/stdc++.h>
using namespace std;

int cost=0;

bool f(int mid, int s, vector<int> &v){
    cost=0;
    for(int i=0;i<mid;i++){
        cost+=v[i]+(i+1)*(mid);
    }
    return cost<=s;
}

int main()
{
    int n,s;cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int lo=0,hi=n;
    int ans=0;
    int cost_ans=0;
    while (lo<=hi)  
    {
        int mid=lo+(hi-lo)/2;
        if(f(mid,s,v)){
            ans=mid;
            // cost_ans=cost;
            cost=0;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    for(int i=0;i<ans;i++) cost_ans+=v[i]+(i+1)*ans;
    cout<<ans<<" "<<cost_ans<<endl;
    
    return 0;
}