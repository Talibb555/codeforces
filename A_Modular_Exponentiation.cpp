#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long prod=pow(2,n);
    long long ans=(m%(prod));
    cout<<ans;
    // cout << m % n;
    return 0;
}