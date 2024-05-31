#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> hsh(26, 0);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (hsh[s[i] - 'A'] == 0)
            {
                hsh[s[i] - 'A']++;
                count += 2;
            }
            else if (hsh[s[i] - 'A'] > 0)
            {
                hsh[s[i] - 'A']++;
                count++;
            }
            // cout<<count<<" ";
        }
        cout << count << endl;
        hsh.clear();
    }

    return 0;
}