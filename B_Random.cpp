#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long kmax, kmin;
    kmax = (n - m) * (n - m + 1) / 2;
    if (n % m == 0)
    {
        kmin = ((n / m - 1) * (n / m) / 2) * m;
    }
    else
    {
        kmin = n % m * ((n / m + 1) * (n / m) / 2);
        // int c = 'a';
        // +(n-(n%m))*((n/m+1-1)*(n/m+1)/2);
        if (n / m != 1)
        {
            kmin += (m - (n % m)) * ((n / m) * (n / m - 1) / 2);
        }
    }
    cout << kmin << " " << kmax << endl;
    return 0;
}