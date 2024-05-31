#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> m;

int rec(int ind, vector<int>& a, long long sum){
    if(ind>=a.size()) return 0;
    if(m.find({ind,sum})!=m.end()) return m[{ind,sum}];
    int take=0;
    if(sum+a[ind]>=0) take=1+rec(ind+1,a,sum+a[ind]);
    int not_take=rec(ind+1,a,sum);
    return m[{ind,sum}] = max(take,not_take);
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<rec(0,a,0)<<endl;
    return 0;
}