#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="Aabb";
    map<char,int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    // for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    vector<pair<int,char>> v;
    for(auto i:m){
        v.push_back({i.second,i.first});
    }
    sort(v.rbegin(),v.rend());
    for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
    
    return 0;
}