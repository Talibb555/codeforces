#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int sum=a[0];
        for (int i = 1; i < n; i++)
        {
            a[i]-=sum;
            sum+=a[i];
        }
        cout<<*max_element(a.begin(),a.end())<<endl;
        
    }

    return 0;
}