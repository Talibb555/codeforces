#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int a[n];
    int mn = INT_MAX;
    bool ok;
    int index;
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int x;
        cin >> x;
        if (x < mn)
        {
            index = i + 1;
            mn = x;
            ok = true;
        }
        else if (x == mn)
        {
            ok = false;
        }
    }
    if (ok)
        cout << index;
    else
        cout << "Still Rozdill";

    return 0;
}