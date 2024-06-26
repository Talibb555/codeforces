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
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    --a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    --b[i];
  }
  vector<int> pos(n);
  for (int i = 0; i < n; i++) {
    pos[b[i]] = i;
  }
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    c[i] = pos[a[i]];
  }
  int mx = -1, ans = 0;
  for (int i = 0; i < n; i++) {
    if (c[i] > mx) {
      mx = c[i];
    } else {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}