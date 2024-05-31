#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long max_sum = 0;
        long long sum = 0;
        long long min_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            max_sum += a / x;
            if (a % x != 0)
            {
                max_sum++;
            }
        }
        min_sum += sum / x;
        if (sum % x != 0)
        {
            min_sum++;
        }

        cout << min_sum << " " << max_sum << endl;
    }

    return 0;
}