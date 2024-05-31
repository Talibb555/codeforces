#include <bits/stdc++.h>
using namespace std;

string makeGood(string s)
{
    int i = 0;
    int len = s.length();
    if(len==1) return s;
    while (!s.empty())
    {
        if (s[i] == (s[i + 1] + 32))
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i = 0;
            len -= 2;
            continue;
        }
        if (s[i] == (s[i + 1] - 32))
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i = 0;
            len -= 2;
            continue;
        }
        i++;
        if (i == len - 1 )
            break;
        if(len==1) break;
    }
    return s;
}

int main()
{
    string s="qFxXfQo";
    cout<<makeGood(s)<<endl;
    return 0;
}