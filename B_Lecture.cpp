#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> first(m), second(m);
    for (int i = 0; i < m; i++)
    {
        cin >> first[i] >> second[i];
    }
    vector<string> lecture(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lecture[i];
        for (int j = 0; j < m; j++)
        {
            if (lecture[i] == first[j])
            {
                if (first[j].size() <= second[j].size())
                {
                    cout << first[j] << " ";
                    break;
                }
                else
                {
                    cout << second[j] << " ";
                    break;
                }
            }
        }
    }

    return 0;
}