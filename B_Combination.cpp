#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    int extra = 1, points = 0;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        if (v[i].second > 0 && extra > 0)
        {
            extra += v[i].second;
            points += v[i].first;
            extra--;
        }
        else
            a.push_back(v[i].first);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++)
    {
        if (extra > 0)
        {
            points += a[i];
            extra--;
        }
        else break;
    }
    cout << points << endl;

    return 0;
}