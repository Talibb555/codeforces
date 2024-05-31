#include <bits/stdc++.h>
using namespace std;

int odd_ct(vector<int> &v)
{
    int ct = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (1 & v[i])
            ct++;
    }
    return ct;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long sum = 0;
    int flag = 0;
    sort(v.begin(), v.end());
    if (odd_ct(v) & 1)
    {
        for (int i = 0; i < n; i++)
        {
            if ((1 & v[i]) && flag == 0)
            {
                sum = sum - v[i];
                flag = 1;
            }
            sum += v[i];
        }
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}