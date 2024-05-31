#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, vector<int> &a)
{
    if(n==0) return ;
    if (k < n)
    {
        for(int i=0;i<n;i++) a.push_back(-1);
        if (k > 0)
        {
            a[k - 1] = 200;
            a[k] = -400;
        }
    }
    else
    {
        solve(n-1,k-n,a);
        a.push_back(1000);
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        solve(n,k,a);
        for(auto i:a) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}