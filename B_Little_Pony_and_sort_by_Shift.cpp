#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int inc = 0, dec = 0, ind;
    if (a[n - 1] <= a[0])
        inc++;
    else
    {
        dec++;
        ind=n-1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            inc++;
            // ind=i;
        }
        else
        {
            dec++;
            ind = i;
        }
    }
    // cout<<inc<<" "<<dec;
    // cout<<ind<<" "<<dec;
    if(dec>1) cout<<-1;
    else if(dec==0) cout<<0;
    else cout<<n-1-ind;

    return 0;
}