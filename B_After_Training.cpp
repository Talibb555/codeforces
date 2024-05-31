#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;cin>>m>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    vector<int> ans;
    for (int i = 0; i < n/2+1; i++)
    {
        if(i==0) ans.push_back(a[n/2]);
        // else if(i==n/2 && n%2==0) ans.push_back(a[n/2-i]);
        else ans.push_back(a[n/2-i]),ans.push_back(a[n/2+i]);
    }
    if(n%2==0){
        for (int i = 0; i < ans.size(); i+=2)
        {
            swap(ans[i],ans[i+1]);
        }
        
    }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    for (int i = 0; i < m; i++)
    {
        cout<<ans[i%n]<<endl;
    }
    
    
    return 0;
}