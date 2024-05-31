#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    int ct=0, cash=1, mxct=0;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i].first==v[i+1].first && v[i].second==v[i+1].second)
        {
            ct++;
        }
        
        else{
            // cash+=ct;
            ct=0;
        }
        mxct=max(ct,mxct);
        // if(cash-1<ct) cash++;
    }
    cout<<cash+mxct<<endl;

    return 0;
}