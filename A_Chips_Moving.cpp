#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    // int index=(*max_element(a,a+n)+*min_element(a,a+n)+*min_element(a,a+n)+*min_element(a,a+n))/2;
    // if (index%2==0)
    // {
    //     cout<<odd_count<<endl;
    // }
    // else
    // {
    //     cout<<even_count<<endl;
    // }
    cout << min(odd_count, even_count) << endl;

    return 0;
}