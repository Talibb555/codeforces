#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long z;
        if (n % 4 == 0)
        {
            // cout<<x<<endl;
            z = 0;
        }
        if (n % 4 == 1)
        {
            // cout<<x-n<<endl;
            z = -n;
        }
        if (n % 4 == 2)
        {
            // cout<<x+1<<endl;
            z = 1;
        }
        if (n % 4 == 3)
        {
            // cout<<(((n+1)/4)*4)+x<<endl;
            z = n + 1;
        }
        if (x % 2 == 0)
        {
            cout << x + z << endl;
        }
        else
        {
            cout << x - z << endl;
        }
    }

    return 0;
}