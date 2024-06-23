#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    map<pair<int, int>, int> m;
    int ans = 0;
    int ct = 0;
    
    for (int i = 0; i < n; i++) {
        if (b[i] == 0 && a[i] == 0) {
            ct++;
            continue;
        }
        if (a[i] == 0) continue;
        
        // Calculate the gcd of a[i] and b[i]
        int g = __gcd(a[i], b[i]);
        
        // Reduce a[i] and b[i] by their gcd
        a[i] /= g;
        b[i] /= g;
        
        // Increment the count for the pair (a[i], b[i])
        m[make_pair(a[i], b[i])]++;
        
        // Update the maximum count found so far
        ans = max(ans, m[make_pair(a[i], b[i])]);
    }
    
    cout << ans + ct << endl;
    return 0;
}
