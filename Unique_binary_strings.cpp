#include <bits/stdc++.h>
using namespace std;

set<string> res;

void solve(string ans, int k){
    if(ans.length()==k){
        // cout<<ans<<endl;
        res.insert(ans);
        return;
    }
    solve(ans+'0',k);
    solve(ans+'1',k);
}

int main()
{
    solve("",3);
    set<string> nums={"111","011","001"};
    for(auto i:res){
        if(nums.find(i)==nums.end()) cout<<i<<endl;
    }
    return 0;
}