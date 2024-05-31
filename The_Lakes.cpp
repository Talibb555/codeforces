#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &a, vector<vector<int>> &vis, int i, int j){
    int n=a.size();
    int m=a[0].size();
    vis[i][j]=1;
    vector<int> dr={0,1,0,-1};
    vector<int> dc={1,0,-1,0};
    int ans=a[i][j];
    for(int k=0;k<4;k++){
        int newr=i+dr[k];
        int newc=j+dc[k];
        if(newr>=0 && newr<n && newc>=0 && newc<m && a[newr][newc]!=0 && vis[newr][newc]==0){
            ans+=dfs(a,vis,newr,newc);
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m)), vis(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && a[i][j]!=0){
                    ans=max(ans,dfs(a,vis,i,j));
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}