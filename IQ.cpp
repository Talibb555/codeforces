#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    int evenind=-1;
    int oddind=-1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            even++;
            evenind=i+1;
        }
        else
        {
            odd++;
            oddind=i+1;
        }
    }
    if(even==1) cout<<evenind<<endl;
    else cout<<oddind<<endl;
    return 0;
}