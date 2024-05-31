#include <bits/stdc++.h>
using namespace std;

int dr[4]={1,-1,0,0};
int dc[4]={0,0,-1,1};
int n,m;
int ct=0;

bool dfs(vector<vector<char>> &v, vector<vector<int>> &vis, stack<pair<int,int>>& st, int i, int j, int par_i, int par_j){
    vis[i][j]=1;
    st.push({i,j});
    for(int k=0;k<4;k++){
        int nr=i+dr[k];
        int nc=j+dc[k];
        if(nr>=0 && nr<n && nc>=0 && nc<m && v[i][j]==v[nr][nc]){
            if(vis[nr][nc]==0){
                if(dfs(v,vis,st,nr,nc,i,j)) return true;
            }
            else if(vis[nr][nc]==1 && (nr!=par_i || nc!=par_j)){
                while(!st.empty()){
                    ct++;
                    int x=st.top().first;
                    int y=st.top().second;
                    st.pop();
                    if(x==nr && y==nc) break;
                }
                return true;
            }
        }
    }
    st.pop();
    return false;
}

int main()
{
    // int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>v[i][j];
    }
    vector<vector<int>> vis(n,vector<int>(m,0));
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                if(dfs(v,vis,st,i,j,-1,-1)){
                    // cout<<"xy"<<endl;
                    // cout<<ct<<endl;
                    if(ct>=4) {cout<<"Yes"<<endl;return 0;}
                    ct=0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}