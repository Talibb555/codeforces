#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    int ans[3][3];
    ans[0][0] = ((x11 + x12 + x21) % 2 == 0 ? 1 : 0);
    ans[0][1] = ((x11 + x12 + x13 + x22) % 2 == 0 ? 1 : 0);
    ans[0][2] = ((x13 + x12 + x23) % 2 == 0 ? 1 : 0);
    ans[1][0] = ((x21 + x11 + x31 + x22) % 2 == 0 ? 1 : 0);
    ans[1][1] = ((x12 + x22 + x21 + x23 + x32) % 2 == 0 ? 1 : 0);
    ans[1][2] = ((x13 + x23 + x33 + x22) % 2 == 0 ? 1 : 0);
    ans[2][0] = ((x31 + x21 + x32) % 2 == 0 ? 1 : 0);
    ans[2][1] = ((x31 + x32 + x33 + x22) % 2 == 0 ? 1 : 0);
    ans[2][2] = ((x32 + x33 + x23) % 2 == 0 ? 1 : 0);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}