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
        vector<vector<int>> a (n,vector<int> (n,0));
        int k=0, l=n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (i == j && j!=n-1)
                {
                    a[i][j] = 1;
                    a[i][j+1] = 1;
                }
                // else if (i==k && j==l-1)
                // {
                //     a[i][j] = 1;
                //     k++;l--;
                // }
                else if (i==n-1)
                {
                    a[i][0]=1;
                    a[i][n-1]=1;
                }
                
                
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}