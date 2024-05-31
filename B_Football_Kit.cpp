#include <bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int hsh[N];

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    int home[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        home[i]=n-1;
        hsh[v[i].first]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        home[i]+=hsh[v[i].second];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<home[i]<<" "<<(n-1)*2-home[i]<<endl;
    }
    
    
    return 0;
}