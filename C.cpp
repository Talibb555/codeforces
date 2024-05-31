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
        vector<int> ans;
        for (int i = 9; i > 0; i--)
        {
            
            if ( n < i)
            {
                // cout << n;
                 
                ans.push_back(n);
                break;
            }
            else
            {
                // cout << i;
                n -= i;
                ans.push_back(i);
                
               
            }
        }
        reverse(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i;
        cout << endl;
    }

    return 0;
}