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
        int x, y, z;
        if (n == 1 || n == 2 || n == 4)
        {
            cout << -1 << endl;
        }
        else
        {
            z = n / 7;
            if (n % 7 == 0)
            {
                x = y = 0;
            }
            else if (n % 7 == 1)
            {
                z--;
                x = y = 1;
            }
            else if (n % 7 == 2)
            {
                z--;
                x = 3;
                y = 0;
            }
            else if (n % 7 == 3)
            {
                x = 1;
                y = 0;
            }
            else if (n % 7 == 4)
            {
                z--;
                x = 2;
                y = 1;
            }
            else if (n % 7 == 5)
            {
                x = 0;
                y = 1;
            }
            else
            {
                x = 2;
                y = 0;
            }
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }

    return 0;
}