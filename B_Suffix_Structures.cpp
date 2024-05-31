#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int flag = 0;
    if (s == t)
    {
        flag = 1;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (t[j] == s[i])
            {
                j++;
            }
            if (j == t.length())
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "automaton" << endl;
        return 0;
    }
    int hsh1[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hsh1[s[i] - 'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        if (hsh1[t[i] - 'a'] > 0)
        {
            hsh1[t[i] - 'a']--;
        }
        else
        {
            cout << "need tree" << endl;
            return 0;
        }
    }
    if (s.length() != t.length())
    {
        cout << "both" << endl;
    }
    else
    {
        cout << "array" << endl;
    }

    return 0;
}