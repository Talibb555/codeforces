#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int j = 0;
    if(n&1) cout<<n/2<<endl;
    else cout<<n/2-1<<endl;
    for (int i = 0; i < n; i++)
    {
        if (1 & i)
        {
            cout << a[j] << " ";
            j++;
        }
        else
            cout << a[n - 1-j] << " ";
    }

    return 0;
}