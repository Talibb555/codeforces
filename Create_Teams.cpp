#include <bits/stdc++.h>
using namespace std;

int dp[100000+5];

int rec(int ind, vector<int>& a, int x){
    if(ind >= a.size()) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int take = 0;
    int jump;
    if(x%a[ind]==0) jump=x/a[ind];
    else jump=x/a[ind]+1;
    if(ind + jump <= a.size()) take = 1 + rec(ind + jump, a, x);
    int not_take = rec(ind + 1, a, x);
    return dp[ind]=max(take, not_take);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp,-1,sizeof(dp));
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        // cout << "Input: n=" << n << ", x=" << x << ", a: ";
        // for(int i = 0; i < n; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        cout << rec(0, a, x) <<endl;
        // cout << "Output: " << result << endl;
    }
    
    return 0;
}
