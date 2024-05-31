#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    multiset<long long> st;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            long long x;
            cin >> x;
            st.insert(x);
        }
        else if (a == 2)
        {
            long long x;
            cin >> x;
            int k;
            cin >> k;
            auto it = st.upper_bound(x);
            while (k--)
            {
                if (it == st.begin())
                    break;
                it--;
            }
            if (k == 0)
                cout << *it << endl; // Corrected condition
            else
                cout << -1 << endl;
        }

        else
        {
            long long x;
            cin >> x;
            int k;
            cin >> k;
            auto it = st.lower_bound(x);
            while (k > 1 && it != st.end())
            {
                it++;
                k--;
            }
            if (it != st.end())
                cout << *it << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}