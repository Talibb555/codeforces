#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& toppingCosts, int target, int ind, vector<int >&ans, int sum){
    // ans.push_back(sum);
    if(ind==toppingCosts.size()){   
        // cout<<sum<<endl;
        if(sum<=target) ans.push_back(sum);
        return;
    }
    if(sum>target) return;
    for (int i = ind; i < toppingCosts.size(); i++)
    {
        solve(toppingCosts,target,i+1,ans,sum+toppingCosts[i]);
        solve(toppingCosts,target,i+1,ans,sum+toppingCosts[i]*2);
        solve(toppingCosts,target,ind+1,ans,sum);
    }
    
    
}

int main()
{
    // vector<int> baseCosts={2,3};
    // vector<int> toppingCosts={4,5,100};
    vector<int> baseCosts={10};
    vector<int> toppingCosts={1};
    // vector<int> baseCosts={1,7};
    // vector<int> toppingCosts={3,4};
    int target=1;
    vector<int> ans;
    for (int i = 0; i < baseCosts.size(); i++)
    {
        solve(toppingCosts,target,0,ans,baseCosts[i]);
    }
    // for(auto i:ans) cout<<i<<" ";
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1];
    
    return 0;
}