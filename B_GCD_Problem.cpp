#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 2, b = n - 1 - a, c = 1;
        while (1)
        {
            if (__gcd(a, b) == 1)
            {
                break;
            }
            a++;
            b--;
        }
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}