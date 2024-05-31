#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m;
    m['Q'] = 9;
    m['R'] = 5;
    m['B'] = 3;
    m['N'] = 3;
    m['P'] = 1;
    m['K'] = 0;
    m['q'] = 9;
    m['r'] = 5;
    m['b'] = 3;
    m['n'] = 3;
    m['p'] = 1;
    m['k'] = 0;
    int white = 0, black = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char c;
            cin >> c;
            if (c != '.' && c >= 65 && c <= 90)
            {
                white += m[c];
            }
            if (c != '.' && c >= 97 && c <= 122)
            {
                black += m[c];
            }
        }
    }
    // cout<<white<<" "<<black<<endl;
    if (black > white)
    {
        cout << "Black" << endl;
    }
    else if (black == white)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "White" << endl;
    }

    return 0;
}