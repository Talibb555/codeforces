#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void check(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % (i + 1) != 0 && (i + 1) % arr[i] != 0)
            return;
    }
    ans.push_back(arr);
}

void f(vector<int> arr, int n, int ind)
{
    if (ind == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        // check(arr);
        return;
    }
    for (int i = ind; i < n; i++)
    {
        if (arr[i] % (ind + 1) == 0 || (ind + 1) % arr[i] == 0)
        {
            swap(arr[i], arr[ind]);
            f(arr, n, ind + 1);
            swap(arr[i], arr[ind]);
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    f(arr, 3, 0);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}