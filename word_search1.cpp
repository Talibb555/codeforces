#include <bits/stdc++.h>
using namespace std;

int vis[6][6]={0};

bool f(vector<vector<char>> &v,int i, int j, int ind, string s) {
    if(ind=s.length()) return true;
    if(i==0||j==0||i>=v.size()||j>=v[0].size()||vis[i][j]==1||s[ind]!=v[i][j]) return false;
    vis[i][j]=1;
    if(f(v,i+1,j,ind+1,s)||f(v,i-1,j,ind+1,s)||f(v,i,j+1,ind+1,s)||f(v,i,j-1,ind+1,s)) return true;
    vis[i][j]=0;
    return false;
}

int main()
{
    vector<vector<char>> v = {{'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
    string s="atae";
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if(s[0]==v[i][j] && f(v,i,j,0,s)) cout<<"yes"<<endl;
        }
        
    }
    cout<<"no"<<endl;
    return 0;
}