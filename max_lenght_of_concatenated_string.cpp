#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if(s[i]==s[j] && i!=j) return false;
        }
        
    }
    // cout<<s<<endl;
    return true;
}
int mx=INT_MIN;
string res;
void solve(vector<string> &arr, int ind, vector<string> ans)
{
    if (ind == arr.size())
    {
        string t = "";
        // cout<<ans<<endl;
        for (auto i : ans)
        {
            // cout << i << " ";
            t+=i;
        }
        // cout<<t<<endl;
        if(check(t)){
            int a=t.size();
            mx=max(mx,a);
            // cout<<'1'<<endl;
            if(t.size()>mx){
                res=t;
                mx=res.size();
            }
        }
        return;
        // cout << endl;
    }
    ans.push_back(arr[ind]);
    solve(arr, ind + 1, ans);
    ans.pop_back();

    solve(arr, ind + 1, ans);
}

int main()
{
    vector<string> arr = {"abcdefghijklmnopqrstuvwxyz"};
    vector<string> ans;
    solve(arr, 0, ans);
    cout<<mx<<endl;
    cout<<res<<endl;
    return 0;
}