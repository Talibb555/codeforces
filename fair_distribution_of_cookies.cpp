#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&bag, vector<int> part1, vector<int> part2, int ind, int sum1, int sum2){
    if(ind==bag.size()){
        for(auto i:part1) cout<<i<<" ";
        // cout<<endl;
        cout<<":"<<sum1<<endl;
        for(auto i:part2) cout<<i<<" ";
        cout<<":"<<sum2<<endl;
        // cout<<endl;
        return;
    }
    part1.push_back(bag[ind]);
    solve(bag,part1,part2,ind+1,sum1+bag[ind],sum2);
    part1.pop_back();
    part2.push_back(bag[ind]);
    solve(bag,part1,part2,ind+1,sum1,sum2+bag[ind]);
    part2.pop_back();

}
int ans=INT_MAX;
void solve1(vector<int>&bag, vector<int> p, int ind, int k){
    if(ind==bag.size()){
        // for(auto i:p) cout<<i<<" ";
        // cout<<endl;
        int mx=INT_MIN;
        mx=max(mx,*max_element(p.begin(),p.end()));
        ans=min(mx,ans);
        return;
    }
    for (int i = 0; i < k; i++)
    {
        p[i]+=bag[ind];
        solve1(bag,p,ind+1,k);
        p[i]-=bag[ind];
    }
    
}

int main()
{
    vector<int> bag={8,15,10};
    int k=2;
    vector<int> part1;
    vector<int> part2;
    // solve(bag,part1,part2,0,0,0);
    vector<int> p(k,0);
    solve1(bag,p,0,k);
    cout<<ans<<endl;
    return 0;
}