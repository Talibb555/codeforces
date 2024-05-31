#include <bits/stdc++.h>
// #include<iostream>
// #include<set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.find(s[i]) == st.end())
            {
                ans += n - (i);
                st.insert(s[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}