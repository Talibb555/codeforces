#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    bool ok=true;
    vector<pair<int , int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if (s>v[i].first)
        {
            s+=v[i].second;
        }
        else
        {
            ok=false;
            break;
        }
        
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // cout<<s<<endl;
    
    return 0;
}