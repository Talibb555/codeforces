#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n,1)), b(m, vector<int>(n)), c(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            if (b[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = 0;
                }
                for (int l = 0; l < m; l++)
                {
                    a[l][j] = 0;
                }
            }
        }
    }
    int x;
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            x = a[i][j];
            // cout << a[i][j] << " ";
            for (int k = 0; k < n; k++)
            {
                x = x || a[i][k];
            }
            for (int l = 0; l < m; l++)
            {
                x = x || a[l][j];
            }
            c[i][j] = x;
        }
        // cout << endl;
    }

    if (b == c)
    {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else cout<<"NO"<<endl;

    return 0;
}