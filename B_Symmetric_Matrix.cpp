#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        while (n--)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b == c)
            {
                count++;
            }
        }
        if (m%2==0 && count>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}