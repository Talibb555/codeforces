#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> ans;
bool palin(string s, int start, int end){
    while (start<=end)
    {
        if(s[start]!=s[end]) return false;
        start++;end--;
    }
    return true;
}
void print(vector<vector<string>> ans){
    for(auto i:ans){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
}
void solve(string s, int ind, vector<string> ds){
    if(ind==s.size()){
        for(auto i:ds) ans.push_back(ds);
        cout<<endl;
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        if(palin(s,ind,i)) {
            ds.push_back(s.substr(ind,i-ind+1));
            solve(s,i+1,ds);
            ds.pop_back();
        }
    }
}


int main()
{
    string s="aab";
    vector<string> ds;
    solve(s,0,ds);
    print(ans);
    return 0;
}