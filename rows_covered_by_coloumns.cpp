#include <bits/stdc++.h>
using namespace std;

int covered(vector<vector<int>> &v)
{
    int sum = 0;
    for (auto i : v)
    {
        int flag = 0;
        for (auto j : i)
        {
            if (j == 1)
            {
                flag = 1;
            }
        }
        if (flag)
            sum++;
    }
    return v.size()-sum;
}
int ans = INT_MIN;
void f(vector<vector<int>> &v, int col, int ind)
{
    if (ind == v[0].size() || col == 0)
    {
        if (col == 0)
        {
            for (auto i : v)
            {
                for (auto j : i)
                    cout << j << " ";
                cout << endl;
            }
            cout << endl;
            // cout<<covered(v)<<endl;
            // ans=max(ans,covered(v));
        }
        for (auto i : v)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
        cout << endl;
        ans = max(ans, covered(v));
        return;
    }
    f(v, col, ind + 1);
    vector<vector<int>> temp = v;
    for (int j = 0; j < v.size(); j++)
    {
        temp[j][ind] = 0;
    }
    f(temp, col - 1, ind + 1);
}

int main()
{
    vector<vector<int>> v = {{1}, {0}};
    // vector<vector<int>> v = {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {0, 0, 1}};
    int n = 2;
    f(v, n, 0);
    cout << ans << endl;
    return 0;
}