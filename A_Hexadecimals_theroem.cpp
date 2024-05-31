#include <bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

long long index(long long n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = 1, b = 0, c = 1;
    int res = 1;
    while (c < n)
    {
        c = a + b;
        res++;
        b = a;
        a = c;
    }
    return res;
}

int main()
{
    long long n;
    cin>>n;
    if (n==0)
    {
        cout<<"0 0 0"<<endl;
        return 0;
    }
    if (n==1)
    {
        cout<<"1 0 0"<<endl;
        return 0;
    }
    if (n==2)
    {
        cout<<"1 1 0"<<endl;
        return 0;
    }
    
    long long i=index(n);
    cout<<fib(i-4)<<" "<<fib(i-3)<<" "<<fib(i-1)<<endl;
    return 0;
}