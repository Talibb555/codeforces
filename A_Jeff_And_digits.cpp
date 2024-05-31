#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int ct = 0, ct_0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 5)
            ct++;
        if (a[i] == 0)
            ct_0++;
    }
    int fives;
    if (ct>=9 && ct_0 > 0)
    {
        fives = ct / 9;

        for (int i = 0; i < fives * 9; i++)
        {
            cout << 5;
        }
        for(int i=0; i<ct_0; i++)cout << 0;
    }
    else if(ct_0>0) cout<<0;
    else cout<<-1;

    return 0;
}