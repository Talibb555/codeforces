#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int ct = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int pos=m-1;
    for (int i = n-1; i >= 0 && pos>=0; i--)
    {
        if(a[i]<=b[pos]){
            pos--;
            ct++;
        }
    }
    
    
    cout<<n-ct<<endl;

    return 0;
}