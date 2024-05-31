#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    cout<<setprecision(30)<<ceil(n/a)*ceil(m/a);
    return 0;
}