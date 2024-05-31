#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s1 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'a' - 32 && s[i] != 'e' - 32 && s[i] != 'i' - 32 && s[i] != 'o' - 32 && s[i] != 'u' - 32 && s[i] != 'y' - 32)
        {
            if (s[i] >= 'a')
            {
                s1 += s[i];
            }
            else
            {
                s1 += s[i] + 32;
            }
        }
    }
    // cout<<s1<<endl;
    string ans = "";
    int j = 0;
    for (int i = 0; i < 2 * s1.length(); i++)
    {
        if (i & 1)
        {
            ans += s1[j];
            j++;
        }
        else
            ans += '.';
    }
    cout << ans << endl;

    return 0;
}