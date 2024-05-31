#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r;
    cin >> l >> r;
    // if (r - l < 2)
    //     cout << -1 << endl;
    // else
    // {
    //     // cout << l << " " << l + 1 << " ";
    //     // for (long long i = l+1; i <= r; i++)
    //     // {
    //     //     if (__gcd(l,i)!=1 && __gcd(l+1,i)==1)
    //     //     {
    //     //         cout << i << endl;
    //     //         break;
    //     //     }
    //     // }
    // }
    if (l & 1)
        l++;
    if (l + 2 > r)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << l << " " << l + 1 << " " << l + 2 << endl;
    }

    return 0;
}