#include <bits/stdc++.h>
using namespace std;

int odd_ct(vector<int> &v)
{
    int ct = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (1 & v[i])
            ct++;
    }
    return ct;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(1&odd_ct(a)) cout<<odd_ct(a)<<endl;
    else cout<<n-odd_ct(a)<<endl;
    
    return 0;
}