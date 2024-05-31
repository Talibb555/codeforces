#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int z,zc;
    int ans = 0;
    for (int i = 0; i*a <= n; i++)
    {
        for (int j = 0; i*a+j*b <= n; j++)
        {
            zc = (n - a * i - b * j);

            if(zc%c==0){
                z=zc/c;
                ans=max(ans,z+i+j);
            }
        }
    }
    cout << ans;

    return 0;
}