#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    b[0] = 0;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        b[i] = max(0, k - a[i] - a[i - 1]);
        sum += b[i];
        a[i] += b[i];
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}