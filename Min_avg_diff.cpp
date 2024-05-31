#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,5,3,9,5,3};
    int n=6;
    vector<int> pf;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        pf.push_back(sum);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<pf[i]<<" ";
    // }
    // cout<<endl;
    vector<int> ans(n);
    for (int i = 0; i < n-1; i++)
    {
        ans[i]=abs((pf[i]/(i+1))-((pf[n-1]-pf[i])/(n-(i+1))));
        // cout<<ans[i]<<" ";
    }
    ans[n-1]=pf[n-1]/n;
    int ind=-1,mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // cout<<ans[i]<<" ";
        if(ans[i]<mn){
            mn=ans[i];
            ind=i;
        }
    }
    cout<<ind<<endl;
    
    return 0;
}