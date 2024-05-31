#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<string> v(n);
    int ct=0 , ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        for (int j = 0; j < v[i].length(); j++)
        {
            if(v[i][j]=='4' || v[i][j]=='7') ct++;
        }
        if(ct<=k) ans++;
        ct=0;
    }
    cout<<ans<<endl;
    
    return 0;
}