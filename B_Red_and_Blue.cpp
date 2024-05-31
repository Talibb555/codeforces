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
        int r[n];
        int cs1 = 0, ms1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            // if(cs1<0) cs1=0;
            cs1 += r[i];
            ms1 = max(ms1, cs1);
        }
        int m;
        cin >> m;
        int cs2 = 0, ms2 = 0;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            // if(cs2<0) cs2=0;
            cs2 += b[i];
            ms2 = max(ms2, cs2);
        }
        // cout<<ms1<<" "<<ms2<<endl;
        cout<<ms1+ms2<<endl;
    }

    return 0;
}