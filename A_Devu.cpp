#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int t[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }
    sum += (n - 1) * 10;
    if (sum > d)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (n - 1) * 2 + (d - sum) / 5 << endl;
    }

    return 0;
}