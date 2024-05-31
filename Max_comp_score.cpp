#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void f1(vector<vector<int>> res){
    int sum=0;
    for (int i = 0; i < res[0].size(); i++)
    {
        if(res[0][i]==res[1][i]) sum++;
    }
    ans.push_back(sum);
}

void f(vector<vector<int>> v1, vector<vector<int>> v2, int ind, vector<vector<int>> res, bool flag)
{
    if (res.size() == 2)
    {
        // for(auto i:res){
        //     for(auto j:i) cout<<j<<" ";
        //     cout<<endl;
        // }
        // cout<<endl;
        f1(res);
        return;
    }
    for (int i = ind; i < v1.size(); i++)
    {
        if (flag)
        {
            res.push_back(v1[i]);
            f(v1, v2, ind, res, !flag);
            res.pop_back();

        }
        else
        {
            res.push_back(v2[i]);
            f(v1, v2, ind, res, !flag);
            res.pop_back();
        }
    }
}

int main()
{
    // string v1="abc";
    // string v2="xyz";
    vector<vector<int>> v1 = {{1, 1, 0}, {1, 0, 1}, {0, 0, 1}};
    vector<vector<int>> v2 = {{1, 0, 0}, {0, 0, 1}, {1, 1, 0}};
    // vector<vector<int>> v1 = {{0,1,0,1,1,1}, {1,0,0,1,0,1}, {1,0,1,1,0,0}};
    // vector<vector<int>> v2 = {{1,0,0,0,0,1}, {0,1,0,0,1,1}, {0,1,0,0,1,1}};
    // vector<vector<int>> v1 = {{0, 0}, {0, 0}, {0, 0},{0,0}};
    // vector<vector<int>> v2 = {{1, 1}, {1, 1}, {1, 1},{1,1}};
    vector<vector<int>> res;

    

    f(v1, v2, 0, res, true);
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    // sort(ans.rbegin(),ans.rend());

    // int sum=0,i=0;
    int n=v1.size();
    // while (n--)
    // {
    //     sum+=ans[i];
    //     i++;
    // }
    // cout<<sum<<endl;
    vector<int> sum(ans.size()/n,0);
    for (int i = 0; i < ans.size(); i++)
    {
        sum[i%n]+=ans[i];
    }
    cout<<*max_element(sum.begin(),sum.end());
    
    return 0;
}