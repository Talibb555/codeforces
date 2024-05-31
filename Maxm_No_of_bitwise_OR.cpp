#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int maxsum,maxsumct;
vector<int> res;
void solve(int arr[], int n, int ind, vector<int> ds, int sum)
{
    if (ind == n)
    {
        // for (auto i : ds)
        // {
        //     ans=ans|i;
        //     cout << i << " "; 
        // }
        // res.push_back(ans);
        // ans=0;
        // cout << endl;
        if(sum==maxsum) maxsumct++;
        else if(sum>maxsum){
            maxsum=sum;
            maxsumct=1;
        } 
        return;
    }
    ds.push_back(arr[ind]);
    solve(arr, n, ind + 1, ds, sum|arr[ind]);
    ds.pop_back();
    solve(arr, n, ind + 1, ds, sum);
}

int main()
{
    int arr[] = {1, 2, 1};
    vector<int> ds;
    maxsum=INT_MIN, maxsumct=0;
    solve(arr, 3, 0, ds, 0);
    cout<<maxsumct<<endl;
    // sort(res.begin(),res.end());
    // for(auto i:res) cout<<i<<" ";cout<<endl;
    // int orr=1;
    // int i=1;
    // while (res[res.size()-i]==res[res.size()-i-1])
    // {
    //     orr++;
    //     i++;
    // }
    // cout<<orr<<endl;
    return 0;
}