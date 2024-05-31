#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> a1(n);
        for (int i = 0; i < n; i++)
            cin >> a1[i];
        int diffl = -1, diffr = -1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != a1[j])
            {
                diffr = j;
                if (diffl == -1)
                    diffl = j;
            }
        }
        while (diffl > 0 && a1[diffl - 1] <= a1[diffl])
            diffl--;
        while (diffr < n - 1 && a1[diffr + 1] >= a1[diffr])
            diffr++;
        cout << diffl + 1 << " " << diffr + 1 << endl;
    }
    return 0;
}