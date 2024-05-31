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
        string s = "";
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                s += '1';
                n -= 2;
            }
            else
            {
                s += '7';
                n -= 3;
            }
        }
        cout << s << endl;
    }

    return 0;
}