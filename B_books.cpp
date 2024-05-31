#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    int books=0;
    int mx=INT_MIN;
    int time=t;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int j=0;
    // vector<int> r;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        while (j<n && sum+a[j]<=t)
        {
            sum+=a[j];
            j++;
        }
        mx=max(mx,j-i);
        sum-=a[i];
        // cout<<mx<<" ";
        
    }
    // for (int i = 0; i < r.size(); i++)
    // {
    //     cout<<r[i]<<" ";
    // }
    cout<<mx;
    

    return 0;
}