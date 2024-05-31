#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k, int ind,int target, vector<int> ds){
    if(k==0){
        if(target==0) for(auto i:ds) cout<<i<<" ";
        cout<<endl;
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        solve(arr,n,k-1,i+1,target-arr[i],ds);
        ds.pop_back();
    }
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    vector<int> ds;
    solve(arr,9,3,0,9,ds);
    return 0;
}