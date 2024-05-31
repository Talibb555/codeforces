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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int mn=INT_MAX;
        int k=3;
        for (int i = 0; i < n-k+1; i++)
        {
            int cur=0;
            for (int j = 0; j < k; j++)
            {
                cur+=abs(v[i+j]-v[i+j+1])+abs(v[i+j+1]-v[i+j+2]);
                break;
            }
            mn=min(mn,cur);
        }
        
        cout<<mn<<endl;
    }

    return 0;
}