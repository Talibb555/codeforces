#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // string s;
    // cin>>s;
    map<string,int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int mx=-1;
    string ans;
    for(auto i:m){
        // cout<<i.first<<" "<<i.second<<endl;
        if (mx<i.second)
        {
            mx=i.second;
            ans=i.first;
        }
        
    }
    cout<<ans;

    return 0;
}