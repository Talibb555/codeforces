#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count;
        int countt = 0;
        int x, y;
        vector<int> v;
        vector<int> v1;
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char c;
                cin >> c;
                a[i][j] = c;
                if (c == '#')
                {
                    count++;
                }
            }
            v.push_back(count);
            count = 0;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 2 && v[i + 1] == 1 && v[i + 2] == 2)
            {
                x = i + 2;
            }
        }
        cout << endl;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[j][i] == '#')
                {
                    countt++;
                }
            }
            v1.push_back(countt);

            countt = 0;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v1[i] == 2 && v1[i + 1] == 1 && v1[i + 2] == 2)
            {
                y = i + 2;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}