#include <bits/stdc++.h>
using namespace std;

bool vis[12][12] = {false};

bool f(vector<vector<char>> &v, int x, int y, string &s, int ind)
{
    if (ind == s.length())
    {
        return true;
    }
    if (x < 0 || y < 0 || x >= v.size() || y >= v[0].size() || vis[x][y] == 1 || s[ind] != v[x][y])
        return false;
    vis[x][y] = true;
    if (f(v, x - 1, y, s, ind + 1) || f(v, x + 1, y, s, ind + 1) || f(v, x, y - 1, s, ind + 1) || f(v, x, y + 1, s, ind + 1))
        return true;
    vis[x][y] = false;
    return false;
}

int main()
{
    vector<vector<char>> v = {{'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
    // string s="pea";
    vector<string> vt = {"oath", "pea", "eat", "rain"};
    // for(auto i:v){
    //     for(auto j:i) s.push_back(j);
    // }
    // cout<<s;
    //    cout<< f(v,0,0,s,0);
    // int i = 0;
    // int n = vt.size();
    // while (n--)
    // {
    //     string s = vt[i];
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         for (int j = 0; j < v[0].size(); j++)
    //         {
    //             if (s[0] == v[i][j] && f(v, i, j, s, 0))
    //             {
    //                 cout << s << endl;
    //                 break;
    //             }
    //             // cout << "YES" << endl;
    //         }
    //     }
    //     i++;
    // }
    int fl=0;
    int ct=0;
    for (int k = 0; k < vt.size(); k++)
    {
        string s=vt[k];
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[0].size(); j++)
            {
                if (s[0] == v[i][j] && f(v, i, j, s, 0))
                {
                    cout << s << endl;
                    fl=1;
                    break;
                }
                // cout << "YES" << endl;
            }
            if(fl) break;
        }
        ct++;
    }
    cout<<ct;

    return 0;
}