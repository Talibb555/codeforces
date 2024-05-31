#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<int> v(k, 0);
    // v[0]=-1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < k)
        {
            v[i] = a[i];
        }
        else
        {
            v[i % k] += a[i];
        }
    }
    // v[0]+=v[k];
    int ind = 0;
    int mn = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
        if (v[i] < mn)
        {
            mn = v[i];
            ind = i;
        }
    }
    // cout<<*min_element(v.begin(),v.end());
    cout << ind + 1 << endl;

    return 0;
}