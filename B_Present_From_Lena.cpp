#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            // cout << j << " ";

            cout << j;
            if (j != i)
            {
                cout << " ";
            }
            // if(j!=) cout<<" ";
        }

        for (int j = 0; j < i && i != n; j++)
        {
            if (j != i)
            {
                cout << " ";
            }
            cout << abs(i - j - 1);
            
        }
        // for (int j = i-1; j <= 0; j--) //0 1 2 3 4 5
        // {
        //     cout<<j<<" ";
        // }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = n - 1; j > i; j--)
        {
            cout << abs(j - n + 1);

            if (j != i+1)
            {
                cout << " ";
            }
        }
        for (int j = n - 2; j > i; j--)
        {
            if (j != i)
            {
                cout << " ";
            }
            cout << j - i - 1;
            
        }

        cout << endl;
    }

    return 0;
}