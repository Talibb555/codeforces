#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long sum = (x * (x + 1)) / 2;
        int n = 0;
        long long a = 0;
        while (a < x)
        {
            a += pow(2, n);
            n++;
        }
        // cout<<sum<<endl;
        // cout<<a<<endl;
        cout << sum - 2 * a <<endl;
    }

    return 0;
}