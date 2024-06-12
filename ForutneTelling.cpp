#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void mainFunction() {
    long long n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if ((accumulate(a.begin(), a.end(), 0LL) + x + y) % 2 == 0) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
}
int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 0; i < testCases; i++) {
        mainFunction();
    }
    
    return 0;
}