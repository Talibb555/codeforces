#include <bits/stdc++.h>
using namespace std;

int mod = (int)(1e9 + 7);
int dp[101][2];

int rec(int n, int d, int k, bool reachedD) {
    if (n < 0) return 0;
    if (n == 0) return reachedD;
    if (dp[n][reachedD] != -1) return dp[n][reachedD];
    int ans = 0;
    for (int i = 1; i <= k; i++) {
        if (i >= d) {
            ans = (ans + rec(n - i, d, k, true)) % mod;
        } else {
            ans = (ans + rec(n - i, d, k, reachedD)) % mod;
        }
    }
    return dp[n][reachedD] = ans;
}

int main() {
    int n, k, d;
    cin >> n >> k >> d;
    memset(dp, -1, sizeof(dp));
    cout << rec(n, d, k, false) << endl;
    return 0;
}
