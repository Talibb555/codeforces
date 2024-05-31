#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char p1, p2;
        string x1, x2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        string n1 = "";
        string n2 = "";
        n1 += x1;
        n2 += x2;
        long long a1 = p1 - '0';
        long long a2 = p2 - '0';
        while (a1--)
        {
            n1 += '0';
        }
        while (a2--)
        {
            n2 += '0';
        }
        // cout<<n1<<" "<<n2<<endl;
        stringstream geek(n1);
        stringstream geeks(n2);
        long long f1 = 0;
        long long f2 = 0;
        geek >> f1;
        geeks >> f2;
        if (f1 > f2)
        {
            cout << ">" << endl;
        }
        else if (f1 == f2)
        {
            cout << "=" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }

    return 0;
}