#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
set<vector<int>> res1;
bool check(vector<int> &v){
    // cout<<v.size()<<endl;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}
void solve(int ind, vector<int>& nums, vector<int>& ds){
    if(ind==nums.size()){
        if(check(ds) && ds.size()>1){
            res1.insert(ds);
        }
        return;
    }
    ds.push_back(nums[ind]);
    solve(ind+1,nums,ds);
    ds.pop_back();
    solve(ind+1,nums,ds);
}

int main()
{
    vector<int> nums={4,6,7,7};
    vector<int> ds;
    solve(0,nums,ds);
    for(auto i:res1) res.push_back(i);
    for(auto i:res){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}