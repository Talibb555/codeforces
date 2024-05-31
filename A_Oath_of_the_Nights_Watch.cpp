#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int count=0;
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++) 
    {
        if (v[i]>v[0] && v[i]<v[n-1])
        {
            count++;
        }
        
    }
    cout<<count;
    
    return 0;
}