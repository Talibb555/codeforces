#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int h, m;
        int min1, hr1, mn = INT_MAX, hr = INT_MAX;
        for (int i = 0; i < n; i++)
        {

            cin >> h >> m;
            if (H > h)
            {
                // hr1 = (abs((24 * 60 - (H * 60 + M)) + (h * 60 + m)) / 60)+(abs((24 * 60 - (H * 60 + M)) + (h * 60 + m)) % 60);
                hr1 = (abs((24 * 60 - (H * 60 + M)) + (h * 60 + m)));
                // min1 = (abs((24 * 60 - (H * 60 + M)) + (h * 60 + m)) % 60);
            }
            else
            {
                // hr1=(abs((H * 60 + M) - (h * 60 + m)) / 60)+(abs((H * 60 + M) - (h * 60 + m)) % 60);
                hr1 = (abs((H * 60 + M) - (h * 60 + m)));
                // min1 = (abs((H * 60 + M) - (h * 60 + m)) % 60);
            }

            // mn = min(min1, mn);
            hr = min(hr1, hr);
            // cout<<hr<<" ";
        }
        cout << hr / 60 << " " << hr % 60 << endl;
    }

    return 0;
}