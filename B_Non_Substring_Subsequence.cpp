#include <bits/stdc++.h>
using namespace std;

bool check_left(string s, int l, int r)
{
    for (int i = 0; i < l; i++)
    {
        if (s[i] == s[l])
        {
            // cout<<"!"<<endl;
            return true;
        }
    }
    return false;
}
bool check_right(string s, int l, int r)
{
    for (int i = r + 1; i < s.length(); i++)
    {
        if (s[i] == s[r])
        {
            // cout<<"!!"<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            if (check_left(s, l, r) || check_right(s, l, r))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}