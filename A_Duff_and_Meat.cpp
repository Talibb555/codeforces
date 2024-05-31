#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, p, price = 101;
    int money = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> p;
        if (p < price)
        {
            price = p;
        }
        money += a * price;
    }
    cout << money << endl;
    return 0;
}