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
        int hsh[102] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            hsh[a]++;
        }
        for (int i = 0; i < 102; i++)
        {
            if (hsh[i] == 0)
            {
                count += i;
                break;
            }
            else
            {
                hsh[i]--;
            }
        }
        for (int i = 0; i < 102; i++)
        {
            if (hsh[i] == 0)
            {
                count += i;
                break;
            }
            else
            {
                hsh[i]--;
            }
        }
        cout << count << endl;
    }

    return 0;
}