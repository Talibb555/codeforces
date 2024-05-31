#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int sum = 0, ct=1;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]!=s[i+1])
            {
                ct++;
            }
            
        }
        if(b>=0) cout<<a*n+b*n<<endl;
        else cout<<a*n+b*(ct/2+1)<<endl;
        
    }

    return 0;
}