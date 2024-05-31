#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin>>n>>v;
    vector<vector<int>> vec(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int k,x;
        cin>>k;
        vector<int> temp;
        for (int j = 0; j < k; j++)
        {
            // int x;
            cin>>x;
            vec[i].push_back(x);
            // temp.push_back(x);
        }
        // vec.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}