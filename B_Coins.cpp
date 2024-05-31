#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isprime(N, 1);
vector<int> hp(N, 0);

int main()
{
    int n;
    cin >> n;
    int num = n;
    vector<int> prime_factors;
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (isprime[i] == true)
        {
            hp[i] = i;
            for (int j = 2 * i; j <= N; j += i)
            {
                isprime[j] = false;
                hp[j] = i;
            }
        }
    }
    while (n > 1)
    {
        int prime_factor = hp[n];
        while (n % prime_factor == 0)
        {
            n /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    sort(prime_factors.begin(), prime_factors.end());
    cout<<num<<" ";
    for (int i = 0; i < prime_factors.size(); i++)
    {
        // cout << prime_factors[i] << " ";
        if (num % prime_factors[i] == 0)
        {
            cout<<num/prime_factors[i]<<" ";
            num/=prime_factors[i];}
        }

        return 0;
    }