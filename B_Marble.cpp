#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 0;
    int ind = s;
    while (s != t)
    {
        s = a[s - 1];
        ct++;
        if (s == ind)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout << ct << endl;
    return 0;
}