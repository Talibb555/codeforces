#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int even = 0, odd = 0, eind, oind;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (1 & a[i])
        {
            odd++;
            oind = i + 1;
        }
        else
        {
            even++;
            eind = i + 1;
        }
    }
    if (even > odd)
        cout << oind << endl;
    else
        cout << eind << endl;

    return 0;
}