#include <bits/stdc++.h>
using namespace std;

int contest(int p, int t)
{
    return max((3 * p) / 10, p - ((p / 250) * t));
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (contest(a, c) > contest(b, d))
    {
        cout << "Misha" << endl;
    }
    else if (contest(a, c) == contest(b, d))
    {
        cout << "Tie" << endl;
    }
    else
    {
        cout << "Vasya" << endl;
    }

    return 0;
}