#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin>>n>>v;
    vector<vector<int>> vec;
    bool u=false;
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
            // vec[i].push_back(x);
            if (v>x && u==false)
            {
                u=true;
                ans.push_back(i+1);
            }
            
            temp.push_back(x);
        }
        u=false;
        vec.push_back(temp);
    }
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    
    
    return 0;
}