#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> odd, even;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (1 & x)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    int mn = min(odd.size(), even.size());
    sum -= accumulate(odd.begin(), odd.begin() + mn, 0);
    sum -= accumulate(even.begin(), even.begin() + mn, 0);
    if (odd.size()>mn)
    {
        sum-=odd[mn];
    }
    if (even.size()>mn)
    {
        sum-=even[mn];
    }
    

    cout << sum;
    return 0;
}