#include <bits/stdc++.h>
using namespace std;

int f(vector<vector<int>> &grid, int i, int j){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0) return 0;
    int current=grid[i][j];
    grid[i][j]=0;
    int ans=current;
    int ans1=0;
    ans1=max(ans1,f(grid,i-1,j));
    ans1=max(ans1,f(grid,i+1,j));
    ans1=max(ans1,f(grid,i,j+1));
    ans1=max(ans1,f(grid,i,j-1));
    ans+=ans1;
    grid[i][j]=current;
    return ans;
}

int main()
{
    vector<vector<int>> grid={
        {0,6,0},
        {5,8,7},
        {0,9,0}
    };
    int ans=0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if(grid[i][j]!=0) ans=max(f(grid,i,j),ans);
        }
        
    }
    cout<<ans<<endl;
    return 0;
}