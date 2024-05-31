#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> a, b;
    cin >> a.first >> a.second >> b.first >> b.second;
    if (a.first == b.first)
    {
        cout << a.first + abs(a.second - b.second) << " " << a.second << " " << b.first + abs(a.second - b.second) << " " << b.second << endl;
    }
    else if (a.second == b.second)
    {
        cout << a.first << " " << a.second + abs(a.first - b.first) << " " << b.first << " " << b.second + abs(a.first - b.first);
    }
    else if (abs(a.first - b.first) == abs(a.second - b.second))
    {
        cout << a.first << " " << b.second << " " << b.first << " " << a.second << endl;
    }
    else cout << -1 << endl;
    return 0;
}