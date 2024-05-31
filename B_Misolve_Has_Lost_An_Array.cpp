#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    long long sum1 = 0, sum2 = 0, i = 0, j = 0;
    while (l--)
    {
        sum1 += pow(2, i);
        i++;
        // cout<<sum1<<" ";
    }
    if ((i) != n)
    {
        sum1 += n - i;
    }
    // cout<<sum1;
    while (r--)
    {
        sum2 += pow(2, j);
        j++;
    }
    if ((j) != n)
    {
        sum2 += (n - j ) * pow(2, j-1);
    }
    cout << sum1 << " " << sum2;

    return 0;
}