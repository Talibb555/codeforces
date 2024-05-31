#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
long long fac[200005 + 5];
long long check = 0;
long long func(string s, long long n, long long op)
{
    char last = s[0];
    long long len = 1;
    long long ans = 1;
    for (long long i = 1; i < n; i++)
    {
        if (s[i] == last)
        {
            check++;
            long long j = i;
            while (j < n && s[j] == last)
            {
                j++;
                len++;
            }
            j--;
            i = j;
            ans = (ans * (len)) % mod;
            len = 1;
        }
        else
        {
            last = s[i];
            len = 1;
        }
    }

    return ans;
}
int main()
{
    fac[0] = 1;
    for (long long i = 1; i < 200006; i++)
    {
        fac[i] = (i * fac[i - 1] % mod) % mod;
    }
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long mini_op = 0;
        char last = s[0];
        for (long long i = 1; i < s.size(); i++)
        {
            if (s[i] == last)
            {
                mini_op++;
            }
            else
            {
                last = s[i];
            }
        }

        long long n = s.size();
  
        //  cout<<mini_op<<endl;

        long long no_of_step = func(s, s.size(), mini_op);
        cout << mini_op << " " << (no_of_step * fac[mini_op]) % mod << endl;
    }
}