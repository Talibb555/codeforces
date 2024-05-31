#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= b)
        {
            sum += a;
        }
        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count << endl;
    return 0;
}