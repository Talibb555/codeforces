#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> u(n), s(n);
        for (int i = 0; i < n; i++) cin >> u[i];
        for (int i = 0; i < n; i++) cin >> s[i];

        map<int, vector<int>> m;
        for (int i = 0; i < n; i++) m[u[i]].push_back(s[i]);
        for (auto &i : m) sort(i.second.rbegin(), i.second.rend());

        map<int, vector<long long>> prefix_sums;
        for (auto &i : m) {
            vector<long long> t(i.second.size() + 1, 0);
            for (int j = 0; j < i.second.size(); j++) {
                t[j + 1] = t[j] + i.second[j];
            }
            prefix_sums[i.first] = t;
        }

        vector<long long> result(n + 1, 0);
        for (auto &i : prefix_sums) {
            int size = i.second.size() - 1;
            for (int k = 1; k <= size; k++) {
                result[k] += i.second[size - (size % k)];
            }
        }

        for (int k = 1; k <= n; k++) {
            cout << result[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
