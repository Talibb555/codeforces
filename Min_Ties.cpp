#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(n % 2 == 1)
        {
            for(int i = 0; i < n; i++)
                for(int j = i + 1; j < n; j++)
                    if(j - i <= n / 2)
                        cout << 1 << " ";
                    else
                        cout << -1 << " ";
            cout << endl;
        }
        else
        {
            for(int i = 0; i < n; i++)
                for(int j = i + 1; j < n; j++)
                    if(j - i < n / 2)
                        cout << 1 << " ";
                    else if(j - i == n / 2)
                        cout << 0 << " ";
                    else
                        cout << -1 << " ";
            cout << endl;
        }
    }
}