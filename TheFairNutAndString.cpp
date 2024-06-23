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
    const long long MOD = 1e9 + 7; // Define the modulus
    string s;
    cin >> s;
    long long ans = 1;
    long long ct = 0;
    string t;
    
    // Extract 'a' and 'b' from the input string
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'b') t.push_back(s[i]);
    }
    
    if (t.empty()) {
        cout << 0 << endl;
        return 0;
    }
    
    // Process the extracted string to calculate the answer
    for (int i = 0; i < t.size() - 1; i++) {
        if (t[i] == 'a' && t[i + 1] == 'a') ct++;
        if (t[i] == 'a' && t[i + 1] != 'a') {
            ct++;
            ans = (ans * (ct + 1)) % MOD;
            ct = 0;
        }
    }   
    if (t.back() == 'a') {
        ct++;
        ans = (ans * (ct + 1LL)) % MOD;
    }
    
    cout << (ans - 1 + MOD) % MOD << endl; // Ensure the result is non-negative
    return 0;
}
