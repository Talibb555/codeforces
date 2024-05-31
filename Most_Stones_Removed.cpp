#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<vector<int>> stones = {{0, 0},
    //                               {0, 1},
    //                               {1, 0},
    //                               {1, 2},
    //                               {2, 1},
    //                               {2, 2}};
    vector<vector<int>> stones = {{0, 1},
                                  {1, 1},
                                  {1, 0}};
    // vector<vector<int>> stones = {{0, 0},
    //                               {0, 2},
    //                               {1, 1},
    //                               {2, 0},
    //                               {2, 2}};
    sort(stones.begin(), stones.end());
    int x = stones[stones.size() - 1][0];
    int y = stones[stones.size() - 1][1];
    int rows[x+1] = {0}, col[y + 1] = {0};
    // vector<int> rows(x,0),col(y,0);
    for (int i = 0; i < stones.size(); i++)
    {
        for (int j = 0; j < stones[i].size(); j++)
        {
            // cout << stones[i][j] << " ";
            if(j==0) rows[stones[i][j]]++;
            else col[stones[i][j]]++;
        }
        cout << endl;
    }
    int ans=0;
    // cout<<x<<" "<<y<<endl;
    for (int i = 0; i < y+1; i++)
    {
        cout << col[i] << endl;
        ans+=col[i];
    }
    for (int i = 0; i < x+1; i++)
    {
        cout << rows[i] << endl;
        ans+=rows[i];
    }
    ans=ans-x-y-1-2;
    // cout<<x<<" "<<y<<endl;
    // cout<<ans<<endl;

    return 0;
}