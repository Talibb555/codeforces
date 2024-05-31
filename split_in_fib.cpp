#include <bits/stdc++.h>
using namespace std;
set<string> st;
bool solve(string s, int ind, vector<int> ds)
{
    if (ind == s.size())
    {
        for (auto i : ds)
            cout << i << " ";
        cout << endl;
        return ds.size() > 2;
        // return;
    }

    int num = 0;

    for (int i = ind; i < s.length(); i++)
    {
        num = (num * 10) + (s[i] - '0');
        // ds.push_back(num);
        // solve(s, i + 1, ds);
        // ds.pop_back();
        // ans+=s.substr(ind,i-ind+1);
        if ((ds.size() < 2) || (ds[ds.size() - 1] + ds[ds.size() - 2] == num))
        {
            ds.push_back(num);
            if (solve(s, i + 1, ds))
                return true;
            ds.pop_back();
            }
            if (i == ind && s[i] == '0')
                return false;
    }
    return false;
}

int main()
{
    string s = "123456789";
    vector<int> ds;
    solve(s, 0, ds);
    // for (auto i : ds)
    //     cout << i << " ";
    // cout << endl;
    return 0;
}